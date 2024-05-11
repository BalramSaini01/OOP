#include <iostream>
using namespace std;
class test
{
private:
    int a;

public:
    test()
    {
        cout << "This example of default constuctor" << endl;
    }
    test(int x)
    {
        a = x;
        cout << "The value of a is : " << a << endl;
    }
    test(test &obj)
    {
        int c = obj.a;
        cout << "The value of c is :" << c << endl;
    }
    ~test()
    {

        cout << "distructor are distroyd the obj" << endl;
    }
};
int main()
{
    test t1;
    test t2(10);
    test t3(t2);
    return 0;
}