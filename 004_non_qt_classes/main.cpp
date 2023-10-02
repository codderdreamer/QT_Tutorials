#include <iostream>

using namespace std;

class Rectangle{
public:
    void set_width(int m_width);
    void set_height(int m_height);

    int get_area()const{
        return width*height;
    }

private:
    int width;
    int height;

};

void Rectangle::set_width(int m_width){
    this->width = m_width;
}

void Rectangle::set_height(int m_height){
    this->height = m_height;
}

int main()
{
    Rectangle rectangle;
    rectangle.set_width(10.0);
    rectangle.set_height(20.1);
    auto area = rectangle.get_area();
    cout << "area: " << area << endl;

    return 0;
}
