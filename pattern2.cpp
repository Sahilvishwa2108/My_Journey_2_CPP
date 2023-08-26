#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"enter the no. of rows:"<<endl;
    cin>>n;


    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}