#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    int min=INT_MAX,smin=INT_MAX;
    int arr[6]={7,7,9,9,10,10};
    int length= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        if(min>arr[i] ){
            smin=min;//2222222//3
            min=arr[i];//-9
        }
        else if(arr[i]<smin and arr[i]!=min){
            smin=arr[i];//-9

        }
    }
    cout<<smin<<endl;




    return 0;
}