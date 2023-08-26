#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int x=0;
    while(num!=0){
        num=num/10;
        x++;
    }
    cout<<x;
    return 0;
}