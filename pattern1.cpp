#include<iostream>
using namespace std;

int main(){
    int rownum,colnum;
    cout<<"enter the no. of column:"<<endl;
    cin>>rownum;
    cout<<"enter the no. of rows:"<<endl;
    cin>>colnum;


    for(int j=1;j<=colnum;j++){
        for(int i=1;i<=rownum;i++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}