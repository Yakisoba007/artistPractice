#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mTab = new QTabWidget;
    mCfgSession = new ConfigSession;
    mTimeline = new Timeline;
    mLibrary = new Library;

    mTab->addTab(mCfgSession, "Configure Session");
    mTab->addTab(mLibrary, "Library");

    ui->Timeline->setWidget(mTimeline);
    setCentralWidget(mTab);
}

MainWindow::~MainWindow()
{
    delete ui;
}
