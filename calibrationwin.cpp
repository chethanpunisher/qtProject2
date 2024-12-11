#include "calibrationwin.h"
#include "ui_calibrationwin.h"

CalibrationWin::CalibrationWin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CalibrationWin)
{
    ui->setupUi(this);
}

CalibrationWin::~CalibrationWin()
{
    delete ui;
}

void CalibrationWin::on_pushButton_calibrateLoadCell_clicked()
{

}


void CalibrationWin::on_pushButton_up_clicked()
{

}


void CalibrationWin::on_pushButton_down_clicked()
{

}


void CalibrationWin::on_pushButton_calibrateRTD_clicked()
{

}

