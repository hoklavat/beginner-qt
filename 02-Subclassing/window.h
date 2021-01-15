#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(QWidget *parent = nullptr);

private:
    QPushButton *m_button;

signals:

};

#endif // WINDOW_H
