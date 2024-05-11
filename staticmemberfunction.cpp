#include<iostream>
using namespace std;
class test{
    private:
    static int count;
    int code;
    public:

    void setcode(){
        code=++count;
    }
    void showcode(){
        cout<<code;
    }
    static void showcount(){
        cout<<count;
    }
};
int test::count;
int main(){
    test t1,t2,t3;
    t1.setcode();
    t2.setcode();
    test::showcount();
    cout<<endl;
    t3.setcode();
    test::showcount();
    cout<<endl;
    t1.showcode();
    cout<<endl;
    t2.showcode();
    cout<<endl;
    t3.showcode();
    cout<<endl;
    test::showcount();
    return 0;
}