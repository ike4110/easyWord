#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->widget->load(QUrl("http://www.google.com"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString word = ui->lineEdit->text();
    QString accessSite = "http://www.dictionary.com/browse/";
    accessSite += word;
    ui->widget->load(QUrl::fromUserInput(accessSite));
}
