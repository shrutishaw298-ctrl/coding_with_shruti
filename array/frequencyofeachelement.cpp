#include<iostream>
#include<vector>
using namespace std;
int main(){
   int numbers[5]={3,3,-1,3,3};
   int length=sizeof(numbers)/sizeof(numbers[0]);
   int c=0,temp,i;
   cout<<" amoung which numbers u want to find frequency : ";
   cin>>temp;
   for(int i=0;i<length;i++){
         if(temp==numbers[i]){
            c++;
         }
}
cout<<c<<endl;
}