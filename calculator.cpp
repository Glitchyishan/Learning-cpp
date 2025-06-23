#include<iostream>
using namespace std;
 int main() {
    int x,y,s,d,p,a;
    cout<<"Enter the first number";
    cin>> x;
    cout<<"enter the second number";
    cin>> y;
    s=x+y;
    d=x-y;
    p=x*y;
    a=x/y;
    cout<<"The sum of those two is "<<s;
    cout<<"The difference is"<<d;
    cout<<" The product is "<<p;
    cout<<"The quotient of those two number is "<<a;
    return 0;
}