#include <QApplication>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QTableView>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    QStandardItemModel m(4, 4);
    for(int r = 0; r < m.rowCount(); r++)
        for(int c = 0; c < m.columnCount(); c++){
            QStandardItem *i = new QStandardItem(QString("R-%0:C-%1").arg(r).arg(c));
            m.setItem(r, c, i);
        }

    QTableView *v1 = new QTableView();
    v1->setModel(&m);
    v1->show();

    QTableView *v2 = new QTableView();
    v2->setModel(&m);
    v2->setSelectionModel(v1->selectionModel());
    v2->show();

    return a.exec();
}
