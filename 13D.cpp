

#include <iostream>

using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle(float a, float b)
    {
        length = a;
        width = b;
    }

    Rectangle operator+(const Rectangle &a) {
        return Rectangle((length + a.length), (width + a.width));
    }

    int area(void) {
        return length * width;
    }
};


int main(void)
{
    Rectangle r1(10, 20);
    Rectangle r2(20, 30);

    Rectangle r3 = r1 + r2;
    cout << r3.area() << endl;
    return 0;
}
