/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView_process;
    QPushButton *pushButton_getReport;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_recipeDetails;
    QPushButton *pushButton_torquDerivedValues;
    QPushButton *pushButton_timeValues;
    QPushButton *pushButton_extendValues;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_start;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_temp;
    QVBoxLayout *verticalLayout_loadCell;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QLabel *label_time;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLabel *label_torque;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLabel *label_tand;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLabel *label_upper;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QLabel *label_lower;
    QLabel *label_com;
    QComboBox *comboBox_comPort;
    QPushButton *pushButton_calibration;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_2->addWidget(label_2);

        tableView_process = new QTableView(centralwidget);
        tableView_process->setObjectName("tableView_process");
        tableView_process->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_2->addWidget(tableView_process);


        verticalLayout_4->addLayout(verticalLayout_2);

        pushButton_getReport = new QPushButton(centralwidget);
        pushButton_getReport->setObjectName("pushButton_getReport");

        verticalLayout_4->addWidget(pushButton_getReport);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout->addWidget(label);

        pushButton_recipeDetails = new QPushButton(centralwidget);
        pushButton_recipeDetails->setObjectName("pushButton_recipeDetails");

        verticalLayout->addWidget(pushButton_recipeDetails);

        pushButton_torquDerivedValues = new QPushButton(centralwidget);
        pushButton_torquDerivedValues->setObjectName("pushButton_torquDerivedValues");

        verticalLayout->addWidget(pushButton_torquDerivedValues);

        pushButton_timeValues = new QPushButton(centralwidget);
        pushButton_timeValues->setObjectName("pushButton_timeValues");

        verticalLayout->addWidget(pushButton_timeValues);


        verticalLayout_4->addLayout(verticalLayout);

        pushButton_extendValues = new QPushButton(centralwidget);
        pushButton_extendValues->setObjectName("pushButton_extendValues");

        verticalLayout_4->addWidget(pushButton_extendValues);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_5->addWidget(pushButton_stop);

        pushButton_start = new QPushButton(centralwidget);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_5->addWidget(pushButton_start);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_12->addWidget(label_4);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_12->addWidget(label_6);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_12->addWidget(label_8);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_12->addWidget(label_10);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_12->addWidget(label_12);


        horizontalLayout_3->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_13->addWidget(label_13);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_13->addWidget(label_14);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_13->addWidget(label_15);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_13->addWidget(label_16);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_13->addWidget(label_17);


        horizontalLayout_3->addLayout(verticalLayout_13);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_16->addWidget(label_18);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_16->addWidget(label_19);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_16->addWidget(label_20);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_16->addWidget(label_21);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_16->addWidget(label_22);


        horizontalLayout_4->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_17->addWidget(label_23);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_17->addWidget(label_24);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_17->addWidget(label_25);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_17->addWidget(label_26);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px; background-color: lightblue"));

        verticalLayout_17->addWidget(label_27);


        horizontalLayout_4->addLayout(verticalLayout_17);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_15 = new QVBoxLayout(groupBox);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_temp = new QVBoxLayout();
        verticalLayout_temp->setObjectName("verticalLayout_temp");

        verticalLayout_14->addLayout(verticalLayout_temp);

        verticalLayout_loadCell = new QVBoxLayout();
        verticalLayout_loadCell->setObjectName("verticalLayout_loadCell");

        verticalLayout_14->addLayout(verticalLayout_loadCell);

        verticalLayout_14->setStretch(0, 2);
        verticalLayout_14->setStretch(1, 5);

        verticalLayout_15->addLayout(verticalLayout_14);


        verticalLayout_5->addWidget(groupBox);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 6);

        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_6->addWidget(label_3);

        label_time = new QLabel(centralwidget);
        label_time->setObjectName("label_time");

        verticalLayout_6->addWidget(label_time);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_7->addWidget(label_5);

        label_torque = new QLabel(centralwidget);
        label_torque->setObjectName("label_torque");

        verticalLayout_7->addWidget(label_torque);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_8->addWidget(label_7);

        label_tand = new QLabel(centralwidget);
        label_tand->setObjectName("label_tand");

        verticalLayout_8->addWidget(label_tand);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_9->addWidget(label_9);

        label_upper = new QLabel(centralwidget);
        label_upper->setObjectName("label_upper");

        verticalLayout_9->addWidget(label_upper);


        horizontalLayout->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("border: 2px  solid lightblue; border-radius: 5px"));

        verticalLayout_10->addWidget(label_11);

        label_lower = new QLabel(centralwidget);
        label_lower->setObjectName("label_lower");

        verticalLayout_10->addWidget(label_lower);


        horizontalLayout->addLayout(verticalLayout_10);

        label_com = new QLabel(centralwidget);
        label_com->setObjectName("label_com");
        label_com->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_com->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_com);

        comboBox_comPort = new QComboBox(centralwidget);
        comboBox_comPort->setObjectName("comboBox_comPort");

        horizontalLayout->addWidget(comboBox_comPort);

        pushButton_calibration = new QPushButton(centralwidget);
        pushButton_calibration->setObjectName("pushButton_calibration");

        horizontalLayout->addWidget(pushButton_calibration);


        verticalLayout_11->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Process Queue----", nullptr));
        pushButton_getReport->setText(QCoreApplication::translate("MainWindow", "Get report", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Run Recipe Details", nullptr));
        pushButton_recipeDetails->setText(QCoreApplication::translate("MainWindow", "Recipe Details", nullptr));
        pushButton_torquDerivedValues->setText(QCoreApplication::translate("MainWindow", "Torque & Derived Values", nullptr));
        pushButton_timeValues->setText(QCoreApplication::translate("MainWindow", "Time Values (min)", nullptr));
        pushButton_extendValues->setText(QCoreApplication::translate("MainWindow", "Extended Values", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "MI_Initail", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "MI_Minimum", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "MH_Maximum", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "OptimumCare", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Measured", nullptr));
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "Parameter", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Thermoplasticity", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "CureRate", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "ReverseTime", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Trend", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Measured", nullptr));
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Time :", nullptr));
        label_time->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Torque:", nullptr));
        label_torque->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Tand:", nullptr));
        label_tand->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Upper:", nullptr));
        label_upper->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Lower:", nullptr));
        label_lower->setText(QString());
        label_com->setText(QCoreApplication::translate("MainWindow", "COM inActive", nullptr));
        pushButton_calibration->setText(QCoreApplication::translate("MainWindow", "Calibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
