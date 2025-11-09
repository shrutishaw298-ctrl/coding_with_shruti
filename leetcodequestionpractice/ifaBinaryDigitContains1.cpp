#include<iostream>
#include<string>
using namespace std;

int main(){
   int unsigned n=0111111111110111011;
   int count=0;
   while(n!=0){
    if(1&n){
        count++;
    }
     n=n>>1;
   }
   cout<<count<<endl;
}