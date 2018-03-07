﻿#ifndef QHKEXCHANGEVOLDATAPROCESS_H
#define QHKEXCHANGEVOLDATAPROCESS_H

#include <QRunnable>
#include <QDate>
#include <QObject>
#include "dbservices/sharedata.h"

class QHKExchangeVolDataProcess : public QRunnable
{
public:
    explicit QHKExchangeVolDataProcess(const QDate& date, QObject* parent = 0);
    ~QHKExchangeVolDataProcess() {}

public:
    void run();
    void getMktVolInfo(ShareDataList& list, const QDate& date, int mkt);
    void getMktVolInfo(ShareDataList& list, const QDate& date, const QString& fileName);
private:
    QDate       mDate;
    QObject*    mParent;
};

#endif // QHKEXCHANGEVOLDATAPROCESS_H
