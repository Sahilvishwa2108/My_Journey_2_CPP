#include<iostream>
using namespace std;

int main(){
    //taking the values of rows and columns by user as a input
    int m,n;
    cout<<"enter the no. of rows-";
    cin>>m;
    cout<<"enter the no. of columns-";
    cin>>n;

    //iteration
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==1 || j==n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}