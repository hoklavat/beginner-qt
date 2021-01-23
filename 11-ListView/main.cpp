#include <QApplication>
#include <QAbstractItemModel>
#include <QStringListModel>
#include <QListView>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    QStringList l;
    l << "Adem" << "Burhan" << "Cemal" << "Davut" << "Ekrem" << "Fırat";

    QAbstractItemModel *m = new QStringListModel(l);

    QListView *v = new QListView;
    v->setModel(m);
    v->show();

    return a.exec();
}
