#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<" enter the 3 number to find the greatest between them by ternary operator : "<< endl;
    cin>>number1;
    cin>> number2;
    cin>>number3;
    int greatest= number1>number2 && number1>number3 ? number1: number2>number1 && number2>number3 ?  number2: number3;
    cout<<greatest<<" is the greatest number in them : ";

}