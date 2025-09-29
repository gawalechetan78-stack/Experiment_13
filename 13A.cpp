

#include <iostream>

using namespace std;

class Add {
    private:
    double a;
    double b;
    double c;

    public:
    Add() {
        a = 0.0;
        b = 0.0;
        c = 0.0;
    }

    Add(int x, int y) {
        a = x;
        b = y;
    }

    Add(float x, float y) {
        a = x;
        b = y;
        c = 0;
    }

    Add(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    double const add() {
        return a + b + c;
    }
    
};

int main(void) {
    Add a1(1, 2, 3);
    Add a2(1.3f, 3.7f);

    cout << a1.add() << endl;
    cout << a2.add() << endl;
    return 0;
}
