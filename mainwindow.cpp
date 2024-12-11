#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    serialComm(new SerialComm(this))
    , dataParser(new DataParser(this))
    , excelHandler(new ExcelHandler(this))
    , recipeDetails(new RecipeDetails(this))
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    initUI();
    initUI2();
    signalConnection();
    initTables();
    initializeSerialPort("COM24");
    QString jsonFilePath = "sampleData.json";
    jsonManager = new JsonManager(jsonFilePath);
    startFlg = false;
    xAxisCounter = 0;
    xAxisCounter2 = 0;
    newFlg = false;
    // Timer to check for changes in the external list and update the combo box
    QTimer *updateTimer = new QTimer(this);
    QObject::connect(updateTimer, &QTimer::timeout, this, &MainWindow::updateComPort);
    updateTimer->start(1000); // Check for updates every second

    // QTimer *updateTimer2 = new QTimer(this);
    // QObject::connect(updateTimer2, &QTimer::timeout, this, &MainWindow::plotTest);
    // updateTimer2->start(100); // Check for updates every second
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
    // // Create the series
    chart = new QChart();
    chart->legend()->hide();
    chart->setTitle("Real-Time Sine Wave Plot");

    series = new QLineSeries();
    chart->addSeries(series);
    series_2 = new QLineSeries();
    chart->addSeries(series_2);
    // Create and configure axes
    xAxis = new QValueAxis();
    xAxis->setTitleText("Time in minutes");
    xAxis->setLabelFormat("%.2f");
    xAxis->setRange(0, 5); // Show 5 seconds of data at a time
    xAxis->setTickCount(6);
    chart->addAxis(xAxis, Qt::AlignBottom);
    series->attachAxis(xAxis);
    series_2->attachAxis(xAxis);

    yAxis = new QValueAxis();
    yAxis->setTitleText("Temperature");
    yAxis->setLabelFormat("%.1f");
    yAxis->setRange(-1.5, 100);
    chart->addAxis(yAxis, Qt::AlignLeft);
    series->attachAxis(yAxis);
    series_2->attachAxis(yAxis);

    // Create the chart view and set it as the central widget
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->verticalLayout_temp->addWidget(chartView);
}

void MainWindow::updateAxis()
{
    chart->axisX()->setRange(0, 100);
    chart->axisY()->setRange(0, 500);  // Sine wave typically ranges between -1 and 1
}

void MainWindow::initUI2()
{
    chart2 = new QChart();
    chart2->legend()->hide();
    chart2->setTitle("Real-Time Sine Wave Plot");

    //series2 = new QLineSeries();
    //chart2->addSeries(series2);

    // Create and configure axes
    xAxis2 = new QValueAxis();
    xAxis2->setTitleText("Time in minutes");
    xAxis2->setLabelFormat("%.2f");
    xAxis2->setRange(0, 10); // Show 5 seconds of data at a time
    xAxis2->setTickCount(6);
    chart2->addAxis(xAxis2, Qt::AlignBottom);
    //series2->attachAxis(xAxis2);

    yAxis2 = new QValueAxis();
    yAxis2->setTitleText("Torque");
    yAxis2->setLabelFormat("%.1f");
    yAxis2->setRange(-1.5, 100);
    chart2->addAxis(yAxis2, Qt::AlignLeft);
    //series2->attachAxis(yAxis2);

    // Create the chart view and set it as the central widget
    chartView2 = new QChartView(chart2);
    chartView2->setRenderHint(QPainter::Antialiasing);
    ui->verticalLayout_loadCell->addWidget(chartView2);
}

void MainWindow::updateAxis2()
{
    chart2->axisX()->setRange(0, 5);
    chart2->axisY()->setRange(0, 250);  // Sine wave typically ranges between -1 and 1
}

void MainWindow::initTables(){
    model = new QStandardItemModel(3, 3, this); // 3 rows, 2 columns
    model->setHorizontalHeaderLabels({"ID", "TestDate", "BATCH"});

    // Populate the model
    model->setItem(0, 0, new QStandardItem("1"));
    model->setItem(0, 1, new QStandardItem("Alice"));
    model->setItem(0, 2, new QStandardItem("Alice"));
    model->setItem(1, 0, new QStandardItem("2"));
    model->setItem(1, 1, new QStandardItem("Bob"));
    model->setItem(1, 2, new QStandardItem("Bob"));
    model->setItem(2, 0, new QStandardItem("3"));
    model->setItem(2, 1, new QStandardItem("Bob"));
    ui->tableView_process->setModel(model);

    ui->tableView_process->verticalHeader()->setDefaultSectionSize(20); // Set row height
    ui->tableView_process->horizontalHeader()->setDefaultSectionSize(20); // Set column width

    ui->tableView_process->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableView_process->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // Resize rows and columns to fit the available space
    ui->tableView_process->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_process->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    ui->tableView_process->verticalHeader()->setVisible(false);
}

void MainWindow::writeToTempPlot(int x, int y){
    series->append(x, y);
    if (x > 10.0) {
        series->remove(0); // Remove the first point
    }
    xAxis->setRange(x > 5.0 ? x - 5.0 : 0.0, x);
}

void MainWindow::writeToLoadCellPlot(int x, int y){
    series2->append(x, y);
    if (x > 10.0) {
        series2->remove(0); // Remove the first point
    }
    xAxis2->setRange(x > 5.0 ? x - 5.0 : 0.0, x);
}

void MainWindow::clearTempPlot(){
    //chart->axisX()->setRange(0, 5);
    //ser->clear();
}

void MainWindow::clearLoadCellPlot(){
    //chart2->axisX()->setRange(0, 5);
    //ser2->clear();
}

void MainWindow::writeSerial(const QString data1){
    QString data = data1;
    if (!serialComm->writeToSerial(data)) {
        QMessageBox::warning(this, "Error", "Failed to send data.");
    } else {
    }
}

void MainWindow::signalConnection(){
    connect(serialComm, &SerialComm::dataReceived, dataParser, &DataParser::parseData);
    connect(serialComm, &SerialComm::errorOccurred, this, &MainWindow::onSerialPortError);
    connect(dataParser, &DataParser::loadDataParsed, this, &MainWindow::updateLoadValue);
    connect(dataParser, &DataParser::cycleCountParsed, this, &MainWindow::updateCycleCount);
    connect(dataParser, &DataParser::tempValParsed, this, &MainWindow::updateTemperatureValue);
    connect(recipeDetails, &RecipeDetails::onParametersSetTrigger, this, &MainWindow::updateParameters);
}

void MainWindow::onSerialPortError(const QString &error)
{
    QMessageBox::critical(this, "Serial Port Error", error);
}

void MainWindow::updateLoadValue(int modeNumber, double loadValue)
{
    qDebug() << "Mode" << modeNumber << "Load Value:" << loadValue << " , ";
    if(modeNumber == 0 && newFlg){
        writeToLoadCellPlot(xAxisCounter, loadValue);
        //writeToTempPlot(xAxisCounter, tempValue);
        xAxisCounter++;
        if(xAxisCounter == 10){
            newFlg = false;
            xAxisCounter = 0;
        }
    }
    else if(modeNumber == 1){

    }
}

void MainWindow::updateCycleCount(int cycleCount)
{
    qDebug() << "CC " << cycleCount;

}

void MainWindow::updateTemperatureValue(double tempVal, int tempFaultDetec)
{
    qDebug() << "temp " << tempFaultDetec<<" : "<<tempVal;
    if(tempFaultDetec == 1){
        //writeToTempPlot(xAxisCounter, tempVal);
        //xAxisCounter2++;
        tempValue = tempVal;
    }
}


void MainWindow::on_pushButton_start_clicked()
{
    // if(startFlg){
    //     batchDialog = new BatchDialog(this);
    //     batchDialog->setAttribute(Qt::WA_DeleteOnClose);
    //     connect(batchDialog, &BatchDialog::batchAccepted, this, &MainWindow::batchNumberReceived);
    //     batchDialog->show();
    // }
    // else{
    //     QMessageBox::critical(this, "Required info","Please enter the recipe details first");
    // }

    series2 = new QLineSeries();
    chart2->addSeries(series2);
    series2->attachAxis(xAxis2);
    series2->attachAxis(yAxis2);
    newFlg = true;
    //series2 = seriesNew;
}

void MainWindow::batchNumberReceived(const QString &temp){
    batchNumberGlobal = temp;
    qDebug()<<batchNumberGlobal;
    excelCreate();
    sendParameters();
}

void MainWindow::updateParameters(const int &index){
    paramIndex = index;
    qDebug()<<"index received"<<index;
    QJsonObject jsonObject1 = jsonManager->loadParametersByIndex(index);
    operaParam->sampleName = jsonObject1.value("sampleName").toString();
    operaParam->oscAngle = jsonObject1.value("oscAngle").toInt();
    operaParam->runTime = jsonObject1.value("runTime").toInt();
    operaParam->tempSetPoint = jsonObject1.value("tempSetPoint").toInt();
    operaParam->torqueUnit = jsonObject1.value("torqueUnit").toInt();
    operaParam->excelFilePath = jsonObject1.value("excelFilePath").toString();
    startFlg = true;

}
void MainWindow::on_pushButton_recipeDetails_clicked()
{
    recipeDetails = new RecipeDetails(this);
    recipeDetails->setAttribute(Qt::WA_DeleteOnClose);
    recipeDetails->show();
}

void MainWindow::excelCreate(){
    QString excelPath = operaParam->excelFilePath + "/" + batchNumberGlobal;
    if (!excelPath.endsWith(".xlsx", Qt::CaseInsensitive)) {
        excelPath += ".xlsx";
    }

    excelHandler->createNewExcelFile(excelPath);
}

void MainWindow::sendParameters(){
    QString temp = QString::number(operaParam->runTime);
    QString command = "set runTime "+temp + "\n";
    writeSerial(command);

    temp = QString::number(operaParam->tempSetPoint);
    command = "set tempSetPoint "+temp+"\n";
    writeSerial(command);
}

void MainWindow::on_comboBox_comPort_currentIndexChanged(int index)
{

}


void MainWindow::on_comboBox_comPort_currentTextChanged(const QString &arg1)
{

}

void MainWindow::initializeSerialPort(const QString port){
    QString portName = port;
    bool success = serialComm->initializeSerialPort(portName, QSerialPort::Baud115200);

    if (!success) {
        QMessageBox::critical(this, "Error", "Failed to open serial port.");
    } else {
        qDebug()<<"connected";
    }
}

void MainWindow::updateComPort(){
    qDebug()<<"debug value : "<<serialComm->readFromSerial();
    currentList = serialComm->getAvailablePorts();
    qDebug()<<currentList;
    if (currentList != newList) { // Check if the contents have changed
        qDebug() << "Updating combo box contents...";

        // Save the current selection
        currentText = ui->comboBox_comPort->currentText();

        // Update the list and combo box
        currentList = newList;
        ui->comboBox_comPort->clear();
        ui->comboBox_comPort->addItems(currentList);
        qDebug()<<ui->comboBox_comPort->currentText();
        // Restore the previous selection if it exists in the new list
        int index = ui->comboBox_comPort->findText(currentText);
        if (index != -1) {
            ui->comboBox_comPort->setCurrentIndex(index);
        } else {
            ui->comboBox_comPort->setCurrentIndex(0); // Default to the first item if the selection is no longer valid
        }
        if(currentText != newText){
            qDebug()<<"com : "<<currentText;
            serialComm->closeSerialPort();
            //initializeSerialPort(ui->comboBox_comPort->currentText());
            newText = currentText;
        }

        newList = currentList;
    }

}

void MainWindow::on_pushButton_calibration_clicked()
{
    calibrationWin = new CalibrationWin(this);
    calibrationWin->setAttribute(Qt::WA_DeleteOnClose);
    calibrationWin->show();
}


void MainWindow::on_pushButton_getReport_clicked()
{

}


void MainWindow::on_pushButton_stop_clicked()
{
    QString str1 = "1";//ui->lineEdit_stopCycle->text();
    QString command = "set mode " + str1 + "\n";
    writeSerial(command);
}

