#ifndef ZCHXMAINWINDOW_H
#define ZCHXMAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

namespace Ui {
class zchxMainWindow;
}

class zchxMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit zchxMainWindow(QWidget *parent = 0);
    ~zchxMainWindow();

private slots:
    void slotSystemTrayOperation(QSystemTrayIcon::ActivationReason val);
    void slotSystemTrayMenuClicked();
protected:
    void resizeEvent(QResizeEvent* e);
    void closeEvent(QCloseEvent * e);

private:
    Ui::zchxMainWindow *ui;
};

#endif // ZCHXMAINWINDOW_H