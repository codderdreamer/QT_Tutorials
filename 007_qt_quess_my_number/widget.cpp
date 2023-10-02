#include "widget.h"
#include "./ui_widget.h"
#include <cstdlib>
#include <ctime>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Set up the seed
    std::srand(std::time(nullptr));
    secret_number = std::rand() % 10 + 1;
    qDebug() << "Generated number:" << QString::number(secret_number);
    ui->startOverButton->setDisabled(true);
    ui->messageLabel->setText("");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_guessButton_clicked()
{
    guess_number = ui->numberSpinBox->value();
    if(guess_number==secret_number)
    {
        ui->messageLabel->setText("Congratulations, the number is " + QString::number(guess_number));
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled(false);
    }
    else
    {
        if(guess_number<secret_number)
        {
            ui->messageLabel->setText("Number is lower than that");
        }
        else
        {
            ui->messageLabel->setText("Number is higher than that");
        }

    }
}


void Widget::on_startOverButton_clicked()
{
    ui->guessButton->setDisabled(false);
    ui->startOverButton->setDisabled(true);
    ui->numberSpinBox->setValue(1);
    secret_number = std::rand() % 10 + 1;
    ui->messageLabel->setText("");
}

