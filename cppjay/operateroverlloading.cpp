#include<iostream>
using namespace std;

class complex{
    int x,y;
     public:
     complex(){
    x=0;
    y=0;
}
   
 complex(int a, int b){
    x=a;
    y=b;
 }
 void desplay(){
    cout<<"value of x:"<<x<<endl;
    cout<<"value of y:"<<y<<endl;
    
 }
 complex operator+(complex e){
    complex t;
    t.x=x+e.x;
    t.y=y+e.y;
    return t;
    
 }
};
    int main(){
        complex s1,s2,s3;
        s1=complex(3,6);
        s2=complex(1,5);
        cout<<"first object"<<endl;
        s1.desplay();
        cout<<"secound object"<<endl;
        s2.desplay();
        cout<<"final output"<<endl;
        s3=s1+s2;
        s3.desplay();
        }