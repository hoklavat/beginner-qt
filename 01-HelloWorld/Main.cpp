#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QWidget window;
    window.setFixedSize(300, 50);
    window.setWindowIcon(QIcon("D:/0/Source/QT/01-HelloWorld/icon.png"));
    window.setWindowTitle("First Program");

    QPushButton *button = new QPushButton("Hello World!", &window); //button is child of window.
    button->setText("Hello");
    button->setToolTip("Push Me!");
    button->setFont(QFont("Arial", 12, 1));
    button->setGeometry(10, 10, 280, 30);

    window.show();

    return a.exec();
}
