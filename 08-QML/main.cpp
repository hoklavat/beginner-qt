#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[]){
    QGuiApplication a(argc, argv);
    QQmlApplicationEngine e;
    e.load(QUrl(QStringLiteral("main.qml")));
    return a.exec();

}

