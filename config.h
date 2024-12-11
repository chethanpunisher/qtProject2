#ifndef CONFIG_H
#define CONFIG_H

#include <QString>


struct operationParameters
{
    QString sampleName;
    int runTime;
    int oscAngle;
    int torqueUnit;
    int tempSetPoint;
    QString excelFilePath;
};



#endif // CONFIG_H
