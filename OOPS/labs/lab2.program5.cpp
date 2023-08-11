#include<iostream>
using namespace std;
class part{
    private:
    int model_no;
    int part_no;
    float cost;
    public:
    void setpart(int a,int b, float c){
        model_no=a;
        part_no=b;
        cost=c;
    }
    void printpart(){
        cout<<"model_no.="<<model_no<<endl;
        cout<<"part_no.="<<part_no<<endl;
        cout<<"cost="<<cost<<endl;
    }
};
int main(){
        cout<<"ANMOL NEGI"<<endl;
        cout<<"1/22/FET/BCS/131"<<endl;
        part p1,p2;
        cout<<"part 1"<<endl;
        p1.setpart(4959,3342,499.00);
        p1.printpart();
        cout<<"part 2"<<endl;
        p2.setpart(4678,5555,949.00);
        p2.printpart();
        return 0;
    }
