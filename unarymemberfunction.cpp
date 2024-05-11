#include<iostream>
using namespace std;
class test{
    private:
    int x,y,z;
    public:
    void getdata(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void displaydata();
    void operator -();

};
void test::displaydata(){
    cout<<"the value of x :"<<x<<endl;
    cout<<"the value of y :"<<y<<endl;
    cout<<"the value of z :"<<z<<endl;

}

void test::operator-(){
    x=-x;
    y=-y;
    z=-z;
}

int main(){
    test obj;
    obj.getdata(10,-15,20);
    cout<<"before opertor overloading"<<endl;
    obj.displaydata();
    -obj;
    cout<<"after opertor overloading"<<endl;
    obj.displaydata();
}