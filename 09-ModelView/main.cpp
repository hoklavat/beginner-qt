#include <QApplication>
#include <QSplitter>
#include <QFileSystemModel>
#include <QTreeView>
#include <QListView>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    QSplitter *s = new QSplitter;

    QFileSystemModel *f = new QFileSystemModel;
    f->setRootPath(QDir::currentPath());

    QTreeView *t = new QTreeView(s);
    t->setModel(f);
    t->setRootIndex(f->index(QDir::currentPath()));

    QListView *l = new QListView(s);
    l->setModel(f);
    l->setRootIndex(f->index(QDir::currentPath()));

    s->setWindowTitle("Tree and List Views");
    s->show();

    return a.exec();
}
