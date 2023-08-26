#include<iostream>
using namespace std;

int main(){
    int n;
    int s1;
    int s2;
    int s3;
    int x;
    
    cout<<"enter the number"<<endl;
    cin>>x;
    n=x/2;
    if(x%2==0){
        s1=(n*n);
        s2=(n)*(n+1);
        s3=s1-s2;
    }
    else{
        s1=(n+1)*(n+1);w
        s2=(n)*(n+1);
        s3=s1-s2;

    }

    cout<<s3;


    return 0;
}