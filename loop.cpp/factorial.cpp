#include<iostream>
#include<string>
using namespace std;
int main(){
    int numb;
    int fact;
    int i;
    cout<<" enter the number of which you want the factorial \n";
    cin>>numb;
    cout<<" the factorial of a number  "<<numb;
    for (i=1;i<=numb;i++){
        fact=fact*i;

    }
    cout<<fact;

}