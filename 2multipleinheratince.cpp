#include<iostream>
using namespace std;
class M{
    protected:
    int m;
    public:
    void get_m(int x){
        m=x;}
    };
    class N{
        protected:
        int n;
        public:
        void get_n(int y){
            n=y;

        }
    };
    class P :public M, public N{
        public:
        void display(){
            cout<<"m ="<<m<<" ,n= "<<n<<endl;
        }
    };
int main(){
    P obj;
    obj.get_m(10);
    obj.get_n(20);
    obj.display();
}