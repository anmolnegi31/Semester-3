#include<iostream>
using namespace std;
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
    cout<<"ANMOL NEGI"<<endl;
    cout<<"1/22/FET/BCS/131"<<endl;
    cout<<"enter numbers"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"after swapping"<<endl;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
