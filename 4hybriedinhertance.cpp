#include<iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void get_rollno(int a)
    {
        rollno = a;
    }
    void putrollno()
    {
        cout << "rollno :" << rollno << endl;
    }
};
class test : public student
{
protected:
    float m1, m2;

public:
    void get_marks(float d, float e)
    {
        m1 = d;
        m2 = e;
    }
    void put_marks()
    {
        cout << "m1 :" << m1 << " , m2 :" << m2 << endl;
    }
};
class sport{
    protected:
    float score;
    public:
    void getscore(float f){
        score=f;
    }
    void put_score(){
        cout<<"score"<<score<<endl;
    }
};
class result:public test,public sport{
    private:
    float total;
    public:
    void display(){
        total=m1+m2+score;
         putrollno();
        put_marks();
       
        put_score();
        cout<<" total ="<<total<<endl;
    }
};
int main(){
    result obj;
    obj.get_marks(9.6,9.9);
    obj.get_rollno(1001);
    obj.getscore(10);
    obj.display();
    return 0;
}