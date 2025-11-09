#include<iostream>
#include<string>
using namespace std;
int main(){
    int number=153,r;
    int s=0;
   // cout<<" enter two or three digit number";
    //cin>>number;
    while(number!=0){
        r=number%10;// 
        s=s*10+r; //
        number=number/10;  //12 
    }
    cout<< s << endl;

        



    
}