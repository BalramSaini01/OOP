#include<iostream>
using namespace std;
 
 class student{
    protected:
    int x;
    public:
    void setroll_no(int a){
        x=a;
    }
    void put_rollno(){
        cout<<"roll_no is :"<<x;
    }
 };
 class test : virtual public student{
    public:
    float m,n;
    public:
    void set_marks(int a, int b){
        m=a;
        n=b;
    }
    void display_marks(){
        cout<<" the marks of m :"<<m<<endl;
        cout<<"the marks of   n :"<<n<<endl;

    }
 };
 class sport:virtual public student{
    public:
    float s_marks;
    void get_smark(float c){
        s_marks=c;
    }
    void display_smarks(){
        cout<<"the s_marks is :"<<s_marks<<endl;
    }
 };
 class result: public test,public sport{
    public:
    float total;
    void display(){
        total=m+n+s_marks;
        put_rollno();
        display_marks();
        display_smarks();
        cout<<"the total is m,n and s_marks :"<<total<<endl;

    }
 };
 int main(){
    result obj;
    obj.setroll_no(101);
    obj.set_marks(99,100);
    obj.get_smark(97.7);
    obj.display();
 }
