#include<iostream>
using namespace std;
int main(){

int *p=new int[11];
cout<<"memory allocation is complate"<<endl;
delete p;

cout<<"memory deletions are completed";
    return 0;
}