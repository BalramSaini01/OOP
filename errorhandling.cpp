#include<iostream>
using namespace std;

int main(){
    int a ,b;
    cout<<"enter value of a & b "<<endl;
    cin>>a;
    cin>>b;
    int x=a-b;
     try
     {
        if (x!=0){
            cout<<"result:"<<a/x<<endl;

        }else{
            throw(x);
        }
     }
     catch(int i)
     {
        cout<<"exception caugts :"<<x<<endl;
     }
     cout<<"end"<<endl;
     return 0;
     
}