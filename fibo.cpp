#include<iostream>
using namespace std;

fibo(int n){
    if(n==1 || n==0){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    int n=7;
    for(int i=0;i<n;i++){
        cout<<fibo(i);
    }
}