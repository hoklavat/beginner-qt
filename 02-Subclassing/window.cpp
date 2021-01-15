#include "window.h"
#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    setFixedSize(100, 50);
    m_button = new QPushButton("Hello World!", this);
    m_button->setGeometry(10, 10, 80, 30);
    connect(m_button, SIGNAL(clicked()), QApplication::instance(), SLOT(quit())); //QApplication::instance allows access from another class.

}
