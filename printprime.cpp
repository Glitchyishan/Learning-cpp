#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2;i<(num-1);i++){
        if(num%i==0) return false;
    } return true;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a; cin>>b;
    for(int i=a;i<b;i++){
        if(isprime(i)){
            cout<<i<<"\n";
        }
    }
}