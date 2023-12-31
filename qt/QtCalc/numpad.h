#ifndef NUMPAD_H
#define NUMPAD_H

#include <QtWidgets>

class Numpad : public QWidget
{
        Q_OBJECT

    public:
        explicit Numpad(QWidget *parent = nullptr);

    protected:
        void keyPressEvent(QKeyEvent* pe);

    public slots:
        void keyPressed();

    signals:
        void keyStroke(char);

    private:
        QPushButton * _pads[10];
        QPushButton * _plus_op;
        QPushButton * _minus_op;
        QPushButton * _div_op;
        QPushButton * _mul_op;
        QPushButton * _equal_op;
        QPushButton * _period;
        QGridLayout * _layout;
};

#endif // NUMPAD_H
