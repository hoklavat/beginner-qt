#include <QApplication>
#include <QtWidgets>

int main(int argc, char* argv[]){
    QApplication a(argc, argv);

    QWidget w;

    QHBoxLayout *h = new QHBoxLayout();
    QLabel *l = new QLabel(QApplication::translate("nestedlayouts", "Query:"));
    QLineEdit *e = new QLineEdit();
    h->addWidget(l);
    h->addWidget(e);

    QVBoxLayout *v = new QVBoxLayout();
    QTableView *t = new QTableView();
    v->addLayout(h);
    v->addWidget(t);

    QStandardItemModel m;
    m.setHorizontalHeaderLabels({QApplication::translate("nestedlayouts", "Name"), QApplication::translate("nestedlayouts", "Window")});
    const QStringList rows[] = {
        QStringList{QStringLiteral("Ahmet Zerdan"), QStringLiteral("1")},
        QStringList{QStringLiteral("Burhan Yolver"), QStringLiteral("2")},
        QStringList{QStringLiteral("Cemil Vurdu"), QStringLiteral("3")},
        QStringList{QStringLiteral("Dilan Umca"), QStringLiteral("4")},
        QStringList{QStringLiteral("Erdil Tokat"), QStringLiteral("5")},
        QStringList{QStringLiteral("Fadime Sertak"), QStringLiteral("6")},
        QStringList{QStringLiteral("Geren Remzibel"), QStringLiteral("7")},
        QStringList{QStringLiteral("Hamit Pamuk"), QStringLiteral("8")},
        QStringList{QStringLiteral("Irmak Otlan"), QStringLiteral("9")},
        QStringList{QStringLiteral("Jale Nesin"), QStringLiteral("10")}
    };
    QList<QStandardItem*> items;
    for(const QStringList& row: rows){
        items.clear();
        for(const QString &text: row)
            items.append(new QStandardItem(text));
        m.appendRow(items);
    }
    t->setModel(&m);
    t->verticalHeader()->hide();
    t->horizontalHeader()->setStretchLastSection(true);

    w.setLayout(v);
    w.setWindowTitle(QApplication::translate("nestedlayouts", "Nested Layouts"));
    w.show();

    return a.exec();
}

