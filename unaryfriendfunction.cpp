#include<iostream>
using namespace std;
class test{
    private:
    int x,y,z;
    public:
    int setdata(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        cout<<"the value of x :"<<x<<endl;
        cout<<"the value of y :"<<y<<endl;
        cout<<"the value of z :"<<z<<endl;
    }
    friend int operator-(test &obj);
};
int operator-(test &obj){
obj.x=-obj.x;
obj.y=-obj.y;
obj.z=-obj.z;
}

int main(){
    test obj1;
    obj1.setdata(11,-22,77);
    obj1.display();
    operator-(obj1);
    cout<<"after overloading operator"<<endl;
    obj1.display();

}