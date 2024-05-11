#include<iostream>
using namespace std;
class test{
    private:
    float x;
    float y;
    public:
    test(){
        cout<<"this example of binary  operator overloading "<<endl;
    }
    test(float real, float img){
        x=real;
        y=img;
    }
    void display(){
        cout<<"sum of x & y "<<x<<"+i"<<y<<endl;
    }
    test operator+(test &c);
};
test test::operator+(test &c){
    test temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
int main(){
    test obj1,obj2,obj3;
    obj1=test(10.5,20.5);
    obj2=test(30.5,10.5);
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}