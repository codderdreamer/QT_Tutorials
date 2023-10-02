#include <iostream>
#include "rectangle.h"
#include "box.h"

using namespace std;

int main()
{
    Rectangle rectangle(20,20);
    //rectangle.setWidth(10.0);
    //rectangle.setLenght(20.1);
    auto area = rectangle.get_area();
    cout << "area: " << area << endl;

    Box box(10,20,30);
    cout << "volume:" << box.getVolume() << endl;

    return 0;
}
