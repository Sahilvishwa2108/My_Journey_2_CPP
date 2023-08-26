#include<iostream>
using namespace std;
//inverted L
int main(){
    int a;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int b=1;b<=n;b++){
                cout<<"*"<<" ";
            }
        }
        else{
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}