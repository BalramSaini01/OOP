#include<iostream>
using namespace std;
template<class T>
T myswap(T &x ,T &y){
   T temp=x;
    x=y;
    y=temp;
}
void fun(int n, int m ,float a, float b){
    cout<<"m and n before swap :"<<m<<" "<<n<<endl;
    myswap(m,n);
    cout<<"after swap m and n :"<<m<<" "<<n<<endl;
     cout<<"a and b before swap :"<<a<<" "<<b<<endl;
    myswap(a,b);
    cout<<"after swap m and n :"<<a<<" "<<b<<endl;
}
int main(){
    fun(5,4,10.5,20.5);
    return 0;
}