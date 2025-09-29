

#include <iostream>

using namespace std;

class Bill {
    private:
    double a, b, c;

    public:
    Bill() {
        a = 0;
        b = 0;
        c = 0;
    }

    Bill(double x) {
        a = x;
        b = 0;
        c = 0;
    }

    Bill(double x, double y) {
        a = x;
        b = y;
        c = 0;
    }

    Bill(double x, double y, double z) {
        a = x;
        b = y;
        c = z;
    }

    double total() const {
        return a + b + c;
    }
};

int main(void) {
    Bill b1;
    Bill b2(10);
    Bill b3(10, 20);
    Bill b4(10, 20, 30);

    cout << "Bill 1: $" << b1.total() << endl;
    cout << "Bill 2: $" << b2.total() << endl;
    cout << "Bill 3: $" << b3.total() << endl;
    cout << "Bill 4: $" << b4.total() << endl;

    return 0;
}
