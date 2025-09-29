
#include <iostream>

using namespace std;

char getGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';
}

class Student
{
private:
    string name;
    int m1, m2, m3;

public:
    Student()
    {
        name = "NULL";
        m1 = 0;
        m2 = 0;
        m3 = 0;
    }

    void set_name_marks(string x, int a)
    {
        name = x;
        m1 = a;
        m2 = 0;
        m3 = 0;
    }

    void set_name_marks(string x, int a, int b)
    {
        name = x;
        m1 = a;
        m2 = b;
        m3 = 0;
    }

    void set_name_marks(string x, int a, int b, int c)
    {
        name = x;
        m1 = a;
        m2 = b;
        m3 = c;
    }

    int total_marks(void)
    {
        return m1 + m2 + m3;
    }

    string get_name(void)
    {
        return name;
    }
};

int main(void)
{
    Student s1;

    s1.set_name_marks("Archisha", 90, 90, 90);
    cout << "Name: " << s1.get_name() << endl;
    cout << "Marks: " << s1.total_marks() << endl;
    cout << "Grade: " << getGrade(s1.total_marks()/3) << endl;

    cout << endl;

    s1.set_name_marks("Abhisar", 90, 90);
    cout << "Name: " << s1.get_name() << endl;
    cout << "Marks: " << s1.total_marks() << endl;
    cout << "Grade: " << getGrade(s1.total_marks()/3) << endl;

    cout << endl;

    s1.set_name_marks("Anavi", 90);
    cout << "Name: " << s1.get_name() << endl;
    cout << "Marks: " << s1.total_marks() << endl;
    cout << "Grade: " << getGrade(s1.total_marks()/3) << endl;

    return 0;
}
