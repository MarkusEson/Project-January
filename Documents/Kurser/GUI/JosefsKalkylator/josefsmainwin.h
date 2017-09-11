#ifndef JOSEFSMAINWIN_H
#define JOSEFSMAINWIN_H

#include <QMainWindow>

namespace Ui {
class JosefsMainWin;
}

class JosefsMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit JosefsMainWin(QWidget *parent = 0);
    ~JosefsMainWin();

private:
    Ui::JosefsMainWin *ui;
};

#endif // JOSEFSMAINWIN_H
