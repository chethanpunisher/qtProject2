#include "recipedetails.h"
#include "ui_recipedetails.h"

RecipeDetails::RecipeDetails(QWidget *parent)
    : QDialog(parent)
    , excelHandler(new ExcelHandler(this))
    , ui(new Ui::RecipeDetails)
{
    ui->setupUi(this);

    QString jsonFilePath1 = "sampleData.json";
    jsonManager = new JsonManager(jsonFilePath1);
    existingSelected = false;
    if(!jsonManager->createJsonFile()){
        qDebug()<<"countn't create json file";
        close();
    }
}

RecipeDetails::~RecipeDetails()
{
    delete ui;
}

void RecipeDetails::on_pushButton_cancel_clicked()
{

}

void RecipeDetails::on_pushButton_ok_clicked()
{
    bool en = true;
    if(ui->lineEdit_sampleName->text().isEmpty()){
        en = false;
    }
    if(ui->lineEdit_runTime->text().isEmpty()){
        en = false;
    }
    if(ui->lineEdit_oscAngle->text().isEmpty()){
        en = false;
    }
    if(ui->lineEdit_torqueUnit->text().isEmpty()){
        en = false;
    }
    if(ui->lineEdit_tempSetPoint->text().isEmpty()){
        en = false;
    }
    if(en){
        QString tempPath = FolderCreation();
        if(!tempPath.isEmpty()){
            QJsonObject newSampleParam;

            newSampleParam["sampleName"] = ui->lineEdit_sampleName->text();
            newSampleParam["runTime"] = ui->lineEdit_runTime->text().toInt();
            newSampleParam["oscAngle"] = ui->lineEdit_oscAngle->text().toInt();
            newSampleParam["torqueAngle"] = ui->lineEdit_torqueUnit->text();
            newSampleParam["tempSetPoint"] = ui->lineEdit_tempSetPoint->text().toInt();
            newSampleParam["excelFilePath"] = tempPath;
            int index = jsonManager->getSampleWithHighestIndex();
            newSampleParam["index"] = index+1;
            jsonManager->addOperationParameters(newSampleParam);
            emit onParametersSetTrigger(index+1);
        }
    }
    else{

    }
}

QString RecipeDetails::FolderCreation(){
    // Open a QFileDialog to select or create a folder path
    QString folderPath1 = QFileDialog::getExistingDirectory(nullptr, "Select or Create Folder",
                                                            QDir::homePath(),
                                                            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    QString name = ui->lineEdit_sampleName->text();
    QString folderPath = folderPath1 + "/" + name;
    // Check if the user selected a valid path
    if (folderPath.isEmpty()) {
        qDebug() << "No folder selected.";
        return QString(); // Return an empty string if no folder was selected
    }

    // Check if the folder exists; if not, create it
    QDir dir;
    if (!dir.exists(folderPath)) {
        if (dir.mkpath(folderPath)) {
            qDebug() << "Folder created successfully at:" << folderPath;
        } else {
            qDebug() << "Failed to create folder at:" << folderPath;
            return QString();
        }
    } else {
        qDebug() << "Folder already exists at:" << folderPath;
    }

    // Return the path of the selected or newly created folder
    return folderPath;
}

void RecipeDetails::displayRecentOperations() {
    ui->recentOperationsListWidget->clear(); // Clear existing items

    // Get samples sorted by ascending index
    QList<QJsonObject> sortedSamples = listSamplesByAscendingIndex();
    for (const QJsonObject& sample : sortedSamples) {
        QString sampleName = sample.value("sampleName").toString();
        int index = sample.value("index").toInt();
        qDebug() << "Sample Name:" << sampleName << "Index:" << index;
        ui->recentOperationsListWidget->addItem(sampleName);
    }
}

void RecipeDetails::on_recentOperationsListWidget_itemClicked(QListWidgetItem *item)
{
    int index = ui->recentOperationsListWidget->row(item);
    qDebug()<<index;


    QJsonObject samples = jsonManager->loadParametersByIndex(index);

    if(!samples.empty()){
        ui->lineEdit_sampleName->setText(samples.value("sampleName").toString());
        ui->lineEdit_oscAngle->setText(QString::number(samples.value("oscAngle").toDouble()));
        ui->lineEdit_runTime->setText(QString::number(samples.value("runTime").toDouble()));
        ui->lineEdit_tempSetPoint->setText(QString::number(samples.value("tempSetPoint").toDouble()/1000));
        ui->lineEdit_torqueUnit->setText(samples.value("torqueUnit").toString());
        excelFilePath = samples.value("excelFilePath").toString();
    }
}

// Function to list sample parameters by ascending index
QList<QJsonObject> RecipeDetails::listSamplesByAscendingIndex() {
    // Retrieve all samples from JsonManager
    QJsonArray samplesArray = jsonManager->getAllSamples();

    // Convert QJsonArray to QList<QJsonObject> for easier sorting
    QList<QJsonObject> samplesList;
    for (const QJsonValue& sampleValue : samplesArray) {
        samplesList.append(sampleValue.toObject());
    }

    // Sort samplesList by the "index" field in ascending order
    std::sort(samplesList.begin(), samplesList.end(), [](const QJsonObject& a, const QJsonObject& b) {
        return a.value("index").toInt() < b.value("index").toInt();
    });


    return samplesList;
}
