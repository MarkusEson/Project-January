#include "josefsmainwin.h"
#include "ui_josefsmainwin.h"

JosefsMainWin::JosefsMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JosefsMainWin)
{
    ui->setupUi(this);
}

JosefsMainWin::~JosefsMainWin()
{
    delete ui;
}
