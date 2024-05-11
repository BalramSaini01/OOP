#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void get_rollno(int a)
    {
        rollno = a;
    }
    void putrollno()
    {
        cout << "rollno :" << rollno << endl;
    }
};
class test : public student
{
protected:
    float m1, m2;

public:
    void get_marks(float d, float e)
    {
        m1 = d;
        m2 = e;
    }
    void put_marks()
    {
        cout << "m1 :" << m1 << " , m2 :" << m2 << endl;
    }
};
class result : public test
{
private:
    float total;

public:
    void display()
    {
        total = m1 + m2;
        putrollno();
        put_marks();
        cout << total << endl;
    }
};
int main()
{
    result obj;
    obj.get_rollno(1001);
    obj.get_marks(90.3, 85.89);
    obj.display();

    return 0;
}
