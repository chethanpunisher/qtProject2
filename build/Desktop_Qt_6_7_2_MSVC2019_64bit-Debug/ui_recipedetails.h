/********************************************************************************
** Form generated from reading UI file 'recipedetails.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEDETAILS_H
#define UI_RECIPEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecipeDetails
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_sampleName;
    QLineEdit *lineEdit_runTime;
    QLineEdit *lineEdit_oscAngle;
    QLineEdit *lineEdit_torqueUnit;
    QLineEdit *lineEdit_tempSetPoint;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QListWidget *recentOperationsListWidget;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *RecipeDetails)
    {
        if (RecipeDetails->objectName().isEmpty())
            RecipeDetails->setObjectName("RecipeDetails");
        RecipeDetails->resize(400, 300);
        horizontalLayout_3 = new QHBoxLayout(RecipeDetails);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(RecipeDetails);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(RecipeDetails);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(RecipeDetails);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(RecipeDetails);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(RecipeDetails);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_sampleName = new QLineEdit(RecipeDetails);
        lineEdit_sampleName->setObjectName("lineEdit_sampleName");

        verticalLayout_2->addWidget(lineEdit_sampleName);

        lineEdit_runTime = new QLineEdit(RecipeDetails);
        lineEdit_runTime->setObjectName("lineEdit_runTime");

        verticalLayout_2->addWidget(lineEdit_runTime);

        lineEdit_oscAngle = new QLineEdit(RecipeDetails);
        lineEdit_oscAngle->setObjectName("lineEdit_oscAngle");

        verticalLayout_2->addWidget(lineEdit_oscAngle);

        lineEdit_torqueUnit = new QLineEdit(RecipeDetails);
        lineEdit_torqueUnit->setObjectName("lineEdit_torqueUnit");

        verticalLayout_2->addWidget(lineEdit_torqueUnit);

        lineEdit_tempSetPoint = new QLineEdit(RecipeDetails);
        lineEdit_tempSetPoint->setObjectName("lineEdit_tempSetPoint");

        verticalLayout_2->addWidget(lineEdit_tempSetPoint);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_ok = new QPushButton(RecipeDetails);
        pushButton_ok->setObjectName("pushButton_ok");

        horizontalLayout_2->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(RecipeDetails);
        pushButton_cancel->setObjectName("pushButton_cancel");

        horizontalLayout_2->addWidget(pushButton_cancel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        recentOperationsListWidget = new QListWidget(RecipeDetails);
        recentOperationsListWidget->setObjectName("recentOperationsListWidget");

        verticalLayout_3->addWidget(recentOperationsListWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(RecipeDetails);

        QMetaObject::connectSlotsByName(RecipeDetails);
    } // setupUi

    void retranslateUi(QDialog *RecipeDetails)
    {
        RecipeDetails->setWindowTitle(QCoreApplication::translate("RecipeDetails", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RecipeDetails", "Sample Name : ", nullptr));
        label_2->setText(QCoreApplication::translate("RecipeDetails", "Run time : ", nullptr));
        label_3->setText(QCoreApplication::translate("RecipeDetails", "Oscillation angle : ", nullptr));
        label_4->setText(QCoreApplication::translate("RecipeDetails", "Torque unit : ", nullptr));
        label_5->setText(QCoreApplication::translate("RecipeDetails", "Temp set point : ", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("RecipeDetails", "Ok", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("RecipeDetails", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipeDetails: public Ui_RecipeDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEDETAILS_H
