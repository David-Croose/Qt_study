#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_class.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    aaa = new AAA("i am a");
    bbb = new BBB;

    connect(aaa, SIGNAL(newPaper(const QString)), bbb, SLOT(display(const QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    aaa->send();
}

void MainWindow::ccc()
{
    qDebug() << "666";
}
