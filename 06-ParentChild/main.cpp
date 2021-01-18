#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    //Parent.
    QWidget w;
    w.resize(300, 50);
    w.setWindowTitle(QApplication::translate("toplevel", "Top-Level Widget"));
    w.show(); //window remains hidden until calling show.

    //Child.
    QPushButton *b = new QPushButton(QApplication::translate("childwidget", "Press Me"), &w);
    b->move(10, 10);
    b->show();

    a.exec();
}
