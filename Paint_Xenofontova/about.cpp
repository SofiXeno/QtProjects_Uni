#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    ui->plainTextEdit->document()->setPlainText("Produced by Xenofontova Sofia 2020");
}

About::~About()
{
    delete ui;
}
