#ifndef RECIPEDETAILS_H
#define RECIPEDETAILS_H

#include <QDialog>
#include "jsonmanager.h"
#include "excelhandler.h"
#include <QFileDialog>
#include <QListWidgetItem>
#include <QList>
#include <QJsonArray>
#include <QJsonObject>

namespace Ui {
class RecipeDetails;
}

class RecipeDetails : public QDialog
{
    Q_OBJECT

public:
    explicit RecipeDetails(QWidget *parent = nullptr);
    ~RecipeDetails();
    QString FolderCreation();

signals:
    void onParametersSetTrigger(int index);

private slots:

    void on_pushButton_cancel_clicked();
    void displayRecentOperations();
    void on_pushButton_ok_clicked();
    QList<QJsonObject> listSamplesByAscendingIndex();
    void on_recentOperationsListWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::RecipeDetails *ui;
    QString excelFilePath;
    //JsonManager *jsonManager;
    ExcelHandler *excelHandler;
    bool existingSelected;
};

#endif // RECIPEDETAILS_H
