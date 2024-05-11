#include<iostream>
using namespace std;
inline int add(){
    int a=10,b=20;
    return(a+b);
};
inline int display1to9(){//this function is not inline function because its use loop;
    int n=9;
for (int i = 1; i <=n; i++)
{
    cout<<i<<endl;
}

};

int main(){
    
   cout<< add();
    cout<<display1to9();
    
    
    

}