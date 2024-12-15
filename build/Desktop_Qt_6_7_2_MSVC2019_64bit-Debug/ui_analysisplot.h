/********************************************************************************
** Form generated from reading UI file 'analysisplot.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYSISPLOT_H
#define UI_ANALYSISPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AnalysisPlot
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_tableHolder;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_temp;
    QVBoxLayout *verticalLayout_loadCell;

    void setupUi(QDialog *AnalysisPlot)
    {
        if (AnalysisPlot->objectName().isEmpty())
            AnalysisPlot->setObjectName("AnalysisPlot");
        AnalysisPlot->resize(1005, 932);
        verticalLayout_2 = new QVBoxLayout(AnalysisPlot);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AnalysisPlot);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AnalysisPlot);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(AnalysisPlot);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        verticalLayout_tableHolder = new QVBoxLayout();
        verticalLayout_tableHolder->setObjectName("verticalLayout_tableHolder");

        verticalLayout->addLayout(verticalLayout_tableHolder);

        verticalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(verticalLayout);

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

        verticalLayout_2->addLayout(verticalLayout_14);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);

        retranslateUi(AnalysisPlot);

        QMetaObject::connectSlotsByName(AnalysisPlot);
    } // setupUi

    void retranslateUi(QDialog *AnalysisPlot)
    {
        AnalysisPlot->setWindowTitle(QCoreApplication::translate("AnalysisPlot", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AnalysisPlot", "MICRO BELTS", nullptr));
        label_2->setText(QCoreApplication::translate("AnalysisPlot", "STATISTICAL ANALYSIS REPORT", nullptr));
        label_3->setText(QCoreApplication::translate("AnalysisPlot", "MULTICURVE REPORT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalysisPlot: public Ui_AnalysisPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYSISPLOT_H
