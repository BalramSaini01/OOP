#include <iostream>
using namespace std;

class test
{
private:
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << count;
    }
};
int test::count;
int main()
{
    /* static int a;
     int b;                //a is print 0 because stastic variable insilize 0 at first time
     cout<<a<<endl;         //b is print garbage value
     cout<<b;*/

    test obj1, obj2, obj3;
    obj1.getcount();
    obj2.getcount();
    obj3.getcount();

    cout<<endl << "after reading the data" << endl;
    obj1.getdata(10);
    obj2.getdata(10);
    obj3.getdata(10);

    obj1.getcount();
    obj2.getcount();
    obj3.getcount();

    return 0;
}