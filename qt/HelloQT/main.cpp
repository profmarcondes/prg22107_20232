#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QHBoxLayout>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *janela = new QWidget();
    janela->setWindowTitle("MEU APP");

    QLabel * label = new QLabel("Hello QT");
    QPushButton *btn = new QPushButton("QUIT");
    QObject::connect(btn, SIGNAL(clicked()), &a, SLOT(quit()));

    QHBoxLayout * layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->addWidget(btn);

    janela->setLayout(layout);

    janela->show();

    return a.exec();
}
