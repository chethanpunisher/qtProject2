#ifndef BATCHDIALOG_H
#define BATCHDIALOG_H

#include <QDialog>

namespace Ui {
class BatchDialog;
}

class BatchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BatchDialog(QWidget *parent = nullptr);
    ~BatchDialog();

private slots:
    void on_buttonBox_accepted();

signals:
    void batchAccepted(const QString &number);

private:
    Ui::BatchDialog *ui;
};

#endif // BATCHDIALOG_H
