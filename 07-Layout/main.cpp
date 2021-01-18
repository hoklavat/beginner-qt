#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    QWidget w;
    QLabel *l = new QLabel(QApplication::translate("label" , "Name: "));
    QLineEdit *e = new QLineEdit();

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(l);
    layout->addWidget(e);
    w.setLayout(layout);

    w.setWindowTitle(QApplication::translate("windowlayout", "Window Layout"));
    w.show();

    a.exec();
}
