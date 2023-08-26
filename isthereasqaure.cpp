#include<iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"enter the length="<<endl;
    cin>>a;
    int b;
    cout<<"enter the breadth="<<endl;
    cin>>b;
    if(a==b){
        cout<<"it is a square"<<endl;
    }
    else{
        cout<<"it is a rectangle"<<endl;
    }
    return 0;
}