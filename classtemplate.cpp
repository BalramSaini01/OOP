//datamember template

#include<iostream>
using namespace std;
template<class t1, class t2>
class test{
    t1 a;
    t2 b;
    public:
    test(t1 x,t2 y){
        a=x;
        b=y;

    }
    void show(){
        cout<<a;
        cout<<b;

    }
};
int main(){
    test<float ,int>obj1(11.50,20);
    obj1.show();
    return 0;
}