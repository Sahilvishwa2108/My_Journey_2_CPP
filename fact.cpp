#include<iostream>
using namespace std;

int main(){
    int num;
    int n=1;
    cout<<"enter no.";
    cin>>num;
    if(num==0){
        cout<<"factorial of given no. is-"<<endl<<1;
    }
    else{
        while(true){
            n=n*num;
            num--;
            if(num==0){
                break;
            }
        }
    
        cout<<"factorial of given no. is-"<<endl<<n;
    }
    return 0;
}