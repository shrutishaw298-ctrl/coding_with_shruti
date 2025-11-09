#include<iostream>
#include<string>
using namespace std;
int main(){
    int year=2010;
    cout<<" Enter the year to check if it is a leap year : "<< endl;//2000
   cin>> year;


    year%100==0 ? (year % 400 ==0 ? cout<<" it is  a leap year " : cout<<" it is not a leap year " )  :(year%4==0? cout<<" it is a leap year "  : cout<<" it is not a leap year " ) ;//2000
     
    return 0;

}