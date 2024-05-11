#include <iostream>
using namespace std;
class test
{
    public:
    int a;
    int b;

public:
   
    test()
    {
        a=10;
        b=20;
        cout << "a :" << a << endl;
        cout << "b :" << b << endl;
    }
};

int main(){
    test t1;
    return 0;
}