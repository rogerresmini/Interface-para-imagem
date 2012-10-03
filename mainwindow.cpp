#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    view = new QGraphicsView(ui->graphicsView);
    scene = new QGraphicsScene();

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(loadImage()));
    //modifiquei aqui modi
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadImage(){
    imgPath = QFileDialog::getOpenFileName(this, tr("Abrir Imagem"), QDir::currentPath(), tr("Images (*.png *.jpeg *.jpg *.gif)"));


    QPixmap img(imgPath, 0, Qt::AutoColor);
    scene->addPixmap(img);

    view->setScene(scene);
}
