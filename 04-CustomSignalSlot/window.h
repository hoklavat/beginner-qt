#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;

class Window : public QWidget
{
    Q_OBJECT //for custom signals and slots.

public:
    explicit Window(QWidget *parent = nullptr);

signals:
    void counterReached(); //button is clicked 10 times.

private slots: //custom slots region.
    void slotButtonClicked(bool checked);

private:
    QPushButton *m_button;
    int m_counter; //count of clicks.
};

#endif // WINDOW_H
