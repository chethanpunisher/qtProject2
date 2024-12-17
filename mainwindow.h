#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChart>
#include <QList>
#include <QStandardItemModel>
#include "serialcomm.h"
#include <QMessageBox>
#include "dataparser.h"
#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>
#include "batchdialog.h"
#include <QDebug>
#include "excelhandler.h"
#include "config.h"
#include "recipedetails.h"
#include "jsonmanager.h"
#include <QTimer>
#include <QValueAxis>
#include <calibrationwin.h>


class Worker;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // Ui::MainWindow *ui;

private slots:
    void onSerialPortError(const QString &error);
    void updateCycleCount(int cycleCount);
    void updateLoadValue(int modeNumber, double loadValue);
    void updateTemperatureValue(double tempVal, int tempFaultDetec);

    void on_pushButton_start_clicked();

    void on_pushButton_recipeDetails_clicked();

    void on_comboBox_comPort_currentIndexChanged(int index);

    void on_comboBox_comPort_currentTextChanged(const QString &arg1);

    void on_pushButton_calibration_clicked();

    void on_pushButton_getReport_clicked();

    void on_pushButton_stop_clicked();

public slots:
    void batchNumberReceived(const QString &temp);
    void updateParameters(int index);
    void initializeSerialPort(const QString port);
    void updateComPort();

private:
    Ui::MainWindow *ui;
    void initUI();
    void updateAxis();
    void initUI2();
    void updateAxis2();
    void signalConnection();
    void initTables();
    void writeToTempPlot(int x, int y, int y2);
    void writeToLoadCellPlot(double x, int y);
    void clearTempPlot();
    void clearLoadCellPlot();
    void writeSerial(const QString data1);
    void excelCreate();
    void sendParameters();

    QChart *chart;
    QLineSeries *series;
    QLineSeries *ser;
    QChartView *chartView;
    QLineSeries *series_2;
    QChart *chart2;
    QLineSeries *series2;
    QLineSeries *ser2;
    QChartView *chartView2;
    SerialComm *serialComm;
    QStandardItemModel *model;
    DataParser* dataParser;
    BatchDialog *batchDialog;
    QString batchNumberGlobal;
    ExcelHandler *excelHandler;
    operationParameters *operaParam;
    RecipeDetails *recipeDetails;
    int paramIndex;
    JsonManager *jsonManager;
    bool startFlg;
    QStringList currentList;
    QStringList newList;
    QString currentText;
    QString newText;
    double xAxisCounter;
    QValueAxis *xAxis;
    QValueAxis *yAxis;
    int xAxisCounter2;
    QValueAxis *xAxis2;
    QValueAxis *yAxis2;
    CalibrationWin *calibrationWin;
    int tempValue;
    int tempValue2;
    bool newFlg;
    int excelX;
    int excelY;
};


#include <QThread>
#include <QObject>
#include <QDebug>


class Worker : public QObject {
    Q_OBJECT
public:
    explicit Worker(QObject *parent = nullptr);

public slots:
    void doWork();

private:
    //Ui::Worker *ui;
    //MainWindow mw;

signals:
    void workFinished();
};

#endif // MAINWINDOW_H


