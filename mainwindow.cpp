#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new QGraphicsView(ui->graphicsView);
    scene = new QGraphicsScene();

    connect()
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow::loadImage(){
    imgPath = QFileDialog(this, "Abrir Imagem", QDir::currentPath(), tr(".png .jpg .jpeg"));

    //view->set

    view->setScene(scene);
}
