#include<iostream>
using namespace std;
int main(){
    int number,i=2;
    cout<<" enter the number to check if a number is prime or not : ";
    cin>> number;
    while(i*i<=number){
        if(number%i==0){
            cout<<" number is not  prime ";
            return false;
        


        }
        i++;

    }
    cout<<" number is prime";
    return true;
}