#include<iostream>
#include<string>
using namespace std;
int main(){
    int year;
    cout<<" Enter the year to check if it is a leap year : "<< endl;//2000
    cin>> year;
    if(year%100==0){//2000
        if(year%400==0){
            cout<<" it is a leap year in the century";
        }
        else{
            cout<<" it is not a leap year in the century : ";
        }

    }
    else if(year%4==0){
        cout<<" it is a leap year ";
    }
    else {
        cout<<" is is not a leap year ";
    }
    
    
    










    return 0;

}