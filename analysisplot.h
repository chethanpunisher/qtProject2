#ifndef ANALYSISPLOT_H
#define ANALYSISPLOT_H

#include <QDialog>

//class ExcelLoader2;


namespace Ui {
class AnalysisPlot;
}

class AnalysisPlot : public QDialog
{
    Q_OBJECT

public:
    explicit AnalysisPlot(QWidget *parent = nullptr);
    ~AnalysisPlot();

private:
    Ui::AnalysisPlot *ui;

    QString createDynamicTableContent(const QStringList &columns, int rowCount);
    QString createStaticTableContent(const QStringList &columns, const QStringList &rows);
    void tableInit();

};

// class ExcelLoader2 : public QObject {
//     Q_OBJECT

// public:
//     explicit ExcelLoader2(const QString &filePath, QObject *parent = nullptr);

// signals:
//     void progressUpdated(int value);
//     void dataLoaded(QVector<QPointF> data, qreal yMin, qreal yMax);
//     void finished();

// public slots:
//     void load();

// private:
//     QString filePath;

// };

#endif // ANALYSISPLOT_H
