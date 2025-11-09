#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<" enter the 3 number to find the greatest between them :     "<< endl;
    cin>>number1;
    cin>>number2;
    cin>>number3;
    if(number1> number2 && number1>number3){
        cout<< number1<<" is the greatest number in three of them "<<endl;

    }
    else if(number2>number1 && number2>number3){
        cout<<number2<<" is the greatest number in between them"<<endl;


    }
    else{
        cout<<number3<<" is the greatest number in between them"<<endl;
    }
}