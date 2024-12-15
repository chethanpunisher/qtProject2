#include "analysisplot.h"
#include "ui_analysisplot.h"

AnalysisPlot::AnalysisPlot(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AnalysisPlot)
{
    ui->setupUi(this);
}

AnalysisPlot::~AnalysisPlot()
{
    delete ui;
}

QString AnalysisPlot::createDynamicTableContent(const QStringList &columns, int rowCount){
    QString content;
    content += "<table border='1' cellspacing='0' cellpadding='3'>";

    // Add header row
    content += "<tr>";
    for (const QString &col : columns) {
        content += QString("<th>%1</th>").arg(col);
    }
    content += "</tr>";

    // Add rows with dummy data
    for (int row = 0; row < rowCount; ++row) {
        content += "<tr>";
        content += QString("<td>2024-12-%1</td>").arg(row + 1, 2, 10, QChar('0'));
        content += QString("<td>ID%1</td>").arg(row + 1);
        content += QString("<td>Batch%1</td>").arg((row % 3) + 1);
        content += QString("<td>%1</td>").arg(50 + (row % 5) * 10);
        content += QString("<td>%1</td>").arg(40 + (row % 7) * 5);
        content += QString("<td>%1</td>").arg(30 + (row % 9) * 3);
        content += QString("<td>%1</td>").arg(50 + (row % 5) * 10);
        content += QString("<td>%1</td>").arg(40 + (row % 7) * 5);
        content += QString("<td>%1</td>").arg(30 + (row % 9) * 3);
        content += QString("<td>%1</td>").arg(40 + (row % 7) * 5);
        content += QString("<td>%1</td>").arg(30 + (row % 9) * 3);
        content += "</tr>";
    }

    content += "</table>";
    return content;
}

QString AnalysisPlot::createStaticTableContent(const QStringList &columns, const QStringList &rows){
    QString content;
    content += "<table border='1' cellspacing='0' cellpadding='3'>";

    // Add header row
    content += "<tr>";
    content += "<th></th>"; // For row headers
    for (const QString &col : columns) {
        content += QString("<th>%1</th>").arg(col);
    }
    content += "</tr>";

    // Add rows with dummy data
    for (const QString &rowName : rows) {
        content += "<tr>";
        content += QString("<th>%1</th>").arg(rowName);
        for (int col = 0; col < columns.size(); ++col) {
            QString data;
            if (rowName == "Upper Limit") {
                data = QString::number(100 + col * 10);
            } else if (rowName == "Lower Limit") {
                data = QString::number(50 + col * 10);
            } else if (rowName == "Target") {
                data = QString::number(75 + col * 10);
            } else if (rowName == "Average") {
                data = QString::number(60 + col * 10);
            } else if (rowName == "Range") {
                data = QString::number(20);
            } else if (rowName == "Variation") {
                data = QString::number(5);
            }
            content += QString("<td>%1</td>").arg(data);
        }
        content += "</tr>";
    }

    content += "</table>";
    return content;
}

void AnalysisPlot::tableInit(){
    // Create table content
    QString dynamicTable = createDynamicTableContent({"Date", "ID", "Batch", "MI", "ML", "MN", "TS1", "TS2", "TC10", "TC35", "TC50"}, 10); // Example with 10 samples
    QString limitsTable = createStaticTableContent({"Date", "ID", "Batch", "MI", "ML", "MN"}, {"Upper Limit", "Lower Limit", "Target"});
    QString statsTable = createStaticTableContent({"Date", "ID", "Batch", "MI", "ML", "MN"}, {"Average", "Range", "Variation"});

    // Add tables to layout using QLabel
    QLabel *dynamicTableLabel = new QLabel(dynamicTable);
    dynamicTableLabel->setTextFormat(Qt::RichText);
    dynamicTableLabel->setAlignment(Qt::AlignCenter);
    ui->verticalLayout_tableHolder->addWidget(new QLabel("Table 1: Sample Data"));
    ui->verticalLayout_tableHolder->addWidget(dynamicTableLabel);

    QLabel *limitsTableLabel = new QLabel(limitsTable);
    limitsTableLabel->setTextFormat(Qt::RichText);
    limitsTableLabel->setAlignment(Qt::AlignCenter);
    ui->verticalLayout_tableHolder->addWidget(new QLabel("Table 2: Limits"));
    ui->verticalLayout_tableHolder->addWidget(limitsTableLabel);

    QLabel *statsTableLabel = new QLabel(statsTable);
    statsTableLabel->setTextFormat(Qt::RichText);
    statsTableLabel->setAlignment(Qt::AlignCenter);
    ui->verticalLayout_tableHolder->addWidget(new QLabel("Tabel 3: Statistics"));
    ui->verticalLayout_tableHolder->addWidget(statsTableLabel);
}
