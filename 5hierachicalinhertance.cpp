#include<iostream>

using namespace std;
class sport{
    protected:
   int rollno;
    public:
    void get_rollno(int a){
        rollno=a;
    }
    void put_rollno(){
        cout<<"rollno :"<<rollno<<endl;
    }
};
class cricket:public sport{
    protected:
    float c_mark;
    public:
    void getc_mark(float a){
        c_mark=a;
    }
    void display(){
        put_rollno();
        cout<<"c_marks :"<<c_mark<<endl;
    }
};
class basketball:public sport{
    protected:
    float b_mark;
    public:
    void getb_mark(float b){
        b_mark=b;
    }
    void display(){
        put_rollno();
        cout<<" b_mark :"<<b_mark<<endl;
    }
};
class football:public sport{
    protected:
    float f_mark;
    public:
    void getf_mark(float f){
        f_mark=f;
    }
    void display(){
        put_rollno();
        cout<<"f_mark:"<<f_mark<<endl;
    }
};
int main(){
    cricket obj1;
    obj1.get_rollno(101);
    obj1.getc_mark(100);
    obj1.display();

     basketball obj2;
    obj2.get_rollno(101);
    obj2.getb_mark(99);
    obj2.display();

     football obj3;
    obj3.get_rollno(101);
    obj3.getf_mark(98);
    obj3.display();

    return 0;
}
