#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int x=0;
    int y=0;
    while(num>0){
        
        y=num;
        y=y%10;
        x=x+y;
        num=num/10;
    }
    cout<<x;
    return 0;
}