#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QFileDialog>
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsView *view;
    QGraphicsScene *scene;
    QString imgPath;

public slots:
    void loadImage();
    
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
