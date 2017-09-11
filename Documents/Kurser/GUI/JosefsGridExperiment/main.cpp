#include "josefsmainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JosefsMainWin w;
    w.show();

    return a.exec();
}
