#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "rectangle.h"
using namespace std;


class Box{
public:
    Box(int w, int l,int h);
    int getVolume();
private:
    Rectangle m_r;
    int m_height;
};

#endif // BOX_H
