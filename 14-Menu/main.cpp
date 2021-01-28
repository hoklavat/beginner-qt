#include <QApplication>
#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QEventLoop>

void Message1(){
	QMessageBox *m = new QMessageBox(QMessageBox::Information, "Message 1", "Menu1 - Action1", QMessageBox::Ok);
	m->show();
}

int main(int argc, char* argv[]){
	QApplication a(argc, argv);

	QMainWindow *mainWindow = new QMainWindow();
	mainWindow->setFixedSize(800, 600);

	QMenuBar *menuBar = new QMenuBar(mainWindow);
	menuBar->setFixedWidth(800);

	QMenu *menu1;
	menu1 = menuBar->addMenu("&Menu1"); //ALT+m
	QAction *m1Act1 = new QAction("M1-Action1", mainWindow);
	menu1->addAction(m1Act1);
	QEventLoop::connect(m1Act1, &QAction::triggered, mainWindow, &Message1);

	QAction *m1Act2 = new QAction("M1-Action2", mainWindow);
	menu1->addAction(m1Act2);
	QAction *m1Act3 = new QAction("M1-Action3", mainWindow);
	menu1->addAction(m1Act3);

	QMenu *menu2;
	menu2 = menuBar->addMenu("M&enu2"); //ALT+e
	QAction *m2Act1 = new QAction("M2-Action1", mainWindow);
	menu2->addAction(m2Act1);
	QAction *m2Act2 = new QAction("M2-Action2", mainWindow);
	menu2->addAction(m2Act2);
	QAction *m2Act3 = new QAction("M2-Action3", mainWindow);
	menu2->addAction(m2Act3);

	mainWindow->show();

	return a.exec();
}
