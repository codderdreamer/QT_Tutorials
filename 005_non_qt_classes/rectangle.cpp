#include "rectangle.h"

Rectangle::Rectangle()
{
    cout << "No param constructor called" << endl;
}


Rectangle::Rectangle(int w, int h)
{
    cout << "Two param constructor called" << endl;
    width = w;
    lenght = h;
}


void Rectangle::setWidth(int m_width)
{
    this->width = m_width;
}


void Rectangle::setLenght(int m_lenght)
{
    this->lenght = m_lenght;
}


int Rectangle::get_area()const
{
    return width*lenght;
}
