

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount(float amount)
    {
        balance = amount;
    }

    BankAccount operator+(const BankAccount &other)
    {
        return BankAccount(balance + other.balance);
    }

    BankAccount operator*(float interestRate)
    {
        return BankAccount(balance * (1 + interestRate));
    }

    BankAccount operator-(float amount)
    {
        return BankAccount(balance - amount);
    }

    int creditScore()
    {
        if (balance >= 10000)
            return 800;
        else if (balance >= 5000)
            return 700;
        else if (balance >= 1000)
            return 600;
        else
            return 500;
    }

    void showBalance()
    {
        cout << "Balance: $" << balance << endl;
    }
};

int main(void)
{
    BankAccount user_1(3000);
    BankAccount user_2(4000);

    BankAccount jointAccount = user_1 + user_2;

    BankAccount withInterest = jointAccount * 0.05;

    BankAccount afterBills = withInterest - 1000;

    afterBills.showBalance();
    cout << "Credit Score: " << afterBills.creditScore() << endl;

    return 0;
}
