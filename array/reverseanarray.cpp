#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5]={7,2,8,4,9};
    int length=sizeof(arr)/sizeof(arr[0]);
     cout<<length<<endl;
     for(int i=(length-1);i>=0;i--){
        cout<<arr[i];
        

     }
     //for(int i=0;i<length;i++){
        //cout<<arr[i]<<endl;
   // }
}