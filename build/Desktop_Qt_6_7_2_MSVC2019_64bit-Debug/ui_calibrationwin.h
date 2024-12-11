/********************************************************************************
** Form generated from reading UI file 'calibrationwin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONWIN_H
#define UI_CALIBRATIONWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalibrationWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_calibrateLoadCell;
    QLineEdit *lineEdit_calibrateValue;
    QPushButton *pushButton_up;
    QPushButton *pushButton_down;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_weightValue;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_calibrateRTD;
    QLineEdit *lineEdit_calibrateRTD;

    void setupUi(QDialog *CalibrationWin)
    {
        if (CalibrationWin->objectName().isEmpty())
            CalibrationWin->setObjectName("CalibrationWin");
        CalibrationWin->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(CalibrationWin);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_calibrateLoadCell = new QPushButton(CalibrationWin);
        pushButton_calibrateLoadCell->setObjectName("pushButton_calibrateLoadCell");

        horizontalLayout->addWidget(pushButton_calibrateLoadCell);

        lineEdit_calibrateValue = new QLineEdit(CalibrationWin);
        lineEdit_calibrateValue->setObjectName("lineEdit_calibrateValue");

        horizontalLayout->addWidget(lineEdit_calibrateValue);

        pushButton_up = new QPushButton(CalibrationWin);
        pushButton_up->setObjectName("pushButton_up");

        horizontalLayout->addWidget(pushButton_up);

        pushButton_down = new QPushButton(CalibrationWin);
        pushButton_down->setObjectName("pushButton_down");

        horizontalLayout->addWidget(pushButton_down);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(CalibrationWin);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        label_weightValue = new QLabel(CalibrationWin);
        label_weightValue->setObjectName("label_weightValue");

        horizontalLayout_3->addWidget(label_weightValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_calibrateRTD = new QPushButton(CalibrationWin);
        pushButton_calibrateRTD->setObjectName("pushButton_calibrateRTD");

        horizontalLayout_2->addWidget(pushButton_calibrateRTD);

        lineEdit_calibrateRTD = new QLineEdit(CalibrationWin);
        lineEdit_calibrateRTD->setObjectName("lineEdit_calibrateRTD");

        horizontalLayout_2->addWidget(lineEdit_calibrateRTD);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(CalibrationWin);

        QMetaObject::connectSlotsByName(CalibrationWin);
    } // setupUi

    void retranslateUi(QDialog *CalibrationWin)
    {
        CalibrationWin->setWindowTitle(QCoreApplication::translate("CalibrationWin", "Dialog", nullptr));
        pushButton_calibrateLoadCell->setText(QCoreApplication::translate("CalibrationWin", "Calibrate Load Cell", nullptr));
        pushButton_up->setText(QCoreApplication::translate("CalibrationWin", "UP", nullptr));
        pushButton_down->setText(QCoreApplication::translate("CalibrationWin", "DOWN", nullptr));
        label->setText(QCoreApplication::translate("CalibrationWin", "Weight : ", nullptr));
        label_weightValue->setText(QCoreApplication::translate("CalibrationWin", "TextLabel", nullptr));
        pushButton_calibrateRTD->setText(QCoreApplication::translate("CalibrationWin", "Calibrate RTD sensor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrationWin: public Ui_CalibrationWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONWIN_H
