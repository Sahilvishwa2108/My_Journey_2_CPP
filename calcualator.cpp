#include<iostream>
using namespace std;

int main(){
   float num1,num2;
   int operat;
   cout<<"Enter the value of first no.=\n";
   cin>>num1;

   cout<<"Enter the value of second no.=\n";
   cin>>num2;

   cout<<"what operation do you want to perform (/,x,-,+)-\n";
   cin>>operat;

   switch(operat)
   {
   case +:
       cout<<"sum="<<num1+num2<<endl;
       break;
   case -:
       cout<<"subtraction"<<num1-num2<<endl;
       break;
   }


    return 0;
}