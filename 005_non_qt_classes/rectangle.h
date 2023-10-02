#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;


class Rectangle{
public:
    Rectangle();
    Rectangle(int w, int l);
    void setWidth(int m_width);
    void setLenght(int m_lenght);
    int get_area()const;
private:
    int width;
    int lenght;
};

#endif // RECTANGLE_H
