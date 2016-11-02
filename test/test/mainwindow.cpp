#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "entity_global.h"
#include "entity.h"
#include "component.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Entity e(1L);
    qDebug() << e.id();

    Entity *e2 = new Entity(2L);
    qDebug() << e2->id();
    delete e2;

    Component c("hi");
    qDebug() << QString::fromStdString(c.component_type());
}

MainWindow::~MainWindow()
{
    delete ui;
}
