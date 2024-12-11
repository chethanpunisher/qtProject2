#ifndef CALIBRATIONWIN_H
#define CALIBRATIONWIN_H

#include <QDialog>

namespace Ui {
class CalibrationWin;
}

class CalibrationWin : public QDialog
{
    Q_OBJECT

public:
    explicit CalibrationWin(QWidget *parent = nullptr);
    ~CalibrationWin();

private slots:
    void on_pushButton_calibrateLoadCell_clicked();

    void on_pushButton_up_clicked();

    void on_pushButton_down_clicked();

    void on_pushButton_calibrateRTD_clicked();

private:
    Ui::CalibrationWin *ui;
};

#endif // CALIBRATIONWIN_H
