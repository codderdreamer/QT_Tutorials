#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_myButton_clicked()
{
    //qDebug() << "You had to click that button.Didn't you!";

    //QMessageBox::information(this,"Message","You had to click that button. Didn't you?");

    //QMessageBox msgBox;
    //msgBox.setText("The document has been modified.");
    //msgBox.setInformativeText("Do you want to save your changes?");
    //msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    //msgBox.setDefaultButton(QMessageBox::Save);
    //int ret = msgBox.exec();

    QMessageBox msgBox;
    QPushButton *connectButton = msgBox.addButton(tr("Connect"), QMessageBox::ActionRole);
    QPushButton *abortButton = msgBox.addButton(QMessageBox::Abort);

    msgBox.exec();

    if (msgBox.clickedButton() == connectButton) {
        // connect
    } else if (msgBox.clickedButton() == abortButton) {
        // abort
    }
}

