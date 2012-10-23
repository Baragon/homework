#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->webView->load(QUrl("http://www.youtube.com/"));
	connect(ui->lineEdit,SIGNAL(returnPressed()),SLOT(loadPage()));
}

void MainWindow::loadPage()
{
	ui->webView->load(QUrl(ui->lineEdit->text()));
}

MainWindow::~MainWindow()
{
	delete ui;
}
