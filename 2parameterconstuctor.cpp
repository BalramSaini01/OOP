#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    int rollno;
    string name;
    public:
    student(int x,string y){
        rollno=x;
        name=y;
    }
    void display(){
        cout<<"rollno is :"<<rollno<<endl;
        cout<<"name is :"<<name<<endl;
    }
};
int main(){
    student b1(22,"balram");
    student b2(12,"saini");
    b1.display();
    b2.display();
    return 0;
}
