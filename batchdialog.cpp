#include "batchdialog.h"
#include "ui_batchdialog.h"

BatchDialog::BatchDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BatchDialog)
{
    ui->setupUi(this);
}

BatchDialog::~BatchDialog()
{
    delete ui;
}

void BatchDialog::on_buttonBox_accepted()
{
    QString batchNumber = ui->lineEdit_batchNumber->text();
    emit batchAccepted(batchNumber);
}

