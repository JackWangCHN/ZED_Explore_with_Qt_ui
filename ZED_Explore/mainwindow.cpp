#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnRecode_clicked()
{

}

void MainWindow::on_btnImport_clicked()
{

}

void MainWindow::on_btnSetup_clicked()
{

}

void MainWindow::on_btnStart_clicked()
{
    QGraphicsScene* originalScene =new QGraphicsScene(this);
    ui->selectedView->setScene(originalScene);
    QPixmap* pix=new QPixmap("D:/Qt/projects/ZED_Explore/1.jpg");
    originalScene->addPixmap(*pix);
    ui->selectedView->show();
}
