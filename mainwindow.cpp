#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap.fill(Qt::black);

    ui->pixMap->setPixmap(pixmap);
    ui->pixMap->setMouseTracking(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    currentMousePos.setX(event->pos().x());
    currentMousePos.setY(event->pos().y());
    QString title = "Mouse Position: " + QString::number(event->pos().x()) + "," + QString::number(event->pos().y());
    qDebug() << title;
}

void MainWindow::mousePressEvent(QMouseEvent *event){
//    QPainter painter(&pixmap);
//    painter.setRenderHint(QPainter::Antialiasing);
//    QColor red(255,0,0,0);
//    painter.begin(this);
//    painter.setPen(red);
//    painter.drawPoint(currentMousePos);
}
