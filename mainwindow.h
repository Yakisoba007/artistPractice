#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timeline.h"
#include "configsession.h"
#include "library.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTabWidget *mTab;
    Timeline *mTimeline;
    ConfigSession *mCfgSession;
    Library *mLibrary;

};

#endif // MAINWINDOW_H
