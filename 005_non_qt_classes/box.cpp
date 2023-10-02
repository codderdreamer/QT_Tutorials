#include "box.h"




Box::Box(int w, int l,int h):m_r(w,l),m_height(h)
{
    cout << "Para Constructor Called" << endl;
}


int Box::getVolume()
{
    return m_r.get_area()*m_height;
}
