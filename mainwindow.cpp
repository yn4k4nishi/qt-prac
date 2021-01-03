#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    connect(ui->OK, &QPushButton::released, this, &MainWindow::pushOKButton);
    connect(ui->Cansel, &QPushButton::released, this, &MainWindow::pushCanselButton);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushCanselButton() {
    std::cout << "push Cansel button." << std::endl;
}

void MainWindow::pushOKButton() {
    std::cout << "push OK button." << std::endl;
}
