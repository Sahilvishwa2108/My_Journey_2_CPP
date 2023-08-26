#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number.-";
    cin>>n;
    while(true){
        cout<<n%10;
        n=n/10;
        if(n==0){
            break;
        }
    }
    return 0;
}