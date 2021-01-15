#include <QApplication>
#include <QProgressBar>
#include <QSlider>

int main(int c, char** v){
    QApplication a(c, v);

    QWidget w;
    w.setFixedSize(200, 100);

    QProgressBar *p = new QProgressBar(&w);
    p->setRange(0, 100);
    p->setValue(0);
    p->setGeometry(10, 10, 180, 30);

    QSlider *s = new QSlider(&w);
    s->setOrientation(Qt::Horizontal);
    s->setRange(0, 100);
    s->setValue(0);
    s->setGeometry(10, 50, 180, 30);

    w.show();

    QObject::connect(s, SIGNAL(valueChanged(int)), p, SLOT(setValue(int))); //signal and slot methods have same argument structure.

    return a.exec();
}
