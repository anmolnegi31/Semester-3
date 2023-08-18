/*a point on the two dimensional plabe can be represented by two numbers;an X coordinate and a Y coordinate. for example,(4,5) represents a point 4 units to the right of the origin along the X axis and 5 units up the Y axis.the sum of two points can be defined as a new point whose x coordinates is the sum of the X coordinates of the points and whose Y coordinate is the sum if their Y oordinates. write a program that usses a structure called point to model a point.*/ 
#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
int main(){
    cout<<"ANMOL NEGI"<<endl;
    cout<<"1/22/FET/BCS/131"<<endl;
    struct point p1,p2,p3;
    cout<<"enter 1st coordinates"<<endl;
    cin>>p1.x>>p1.y;
    cout<<"enter 2nd cordinates"<<endl;
    cin>>p2.x>>p2.y;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    cout<<p3.x<<" "<<p3.y<<endl;
    
}
