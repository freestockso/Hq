﻿#include "dialog.h"
#include <QApplication>
#include <QTextCodec>
#include <QDebug>
#include <QDate>
//#include "qglobalapplication.h"
#include <QFile>
#include <QDesktopWidget>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    //make size as 9:16
    Dialog w;
#ifdef Q_OS_WIN
    w.showMax();
#else
    w.showFullScreen();
#endif

    return a.exec();
}
