#include<iostream>
using namespace std;
int main(){
    int n=10,number=1000,r;
    bool isfound=false;
    while(number>1){
        r=number%10; //0
        number=number/10; //350
        if(number==1 and r==0){
            isfound=true;
        }

    }
    if(isfound==true){
        cout<<" it is a power of 10";
    }
    else{
        cout<<"it is not a power of 10";
    }
    
}