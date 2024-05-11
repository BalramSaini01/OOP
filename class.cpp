#include <iostream>
using namespace std;
class test
{
private:
    int x = 20;

    int a;
    int b;

public:
    /* int setdata(int x,int y){
         a=x;
         b=y;
     }*/
    int setdata()
    { cout << "enter the value of a & b :" << endl;
        cin>>a>>b;
    }
    void displaydata();
};
void test::displaydata()
{
    cout << "the value of a is :" << a << endl;
    cout << "the value of b is :" << b << endl;
};
int main()
{
    test t1;
    t1.setdata();
    t1.displaydata();
    // cout<<t1.x; //he pass the error because we are delecred data into private section;
}