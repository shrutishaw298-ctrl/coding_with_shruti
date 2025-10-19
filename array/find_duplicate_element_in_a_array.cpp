#include<iostream>
#include<vector>
#include<string>
#include<climits>

//'''
using namespace std;


int main(){
    int isvisited=INT_MIN;
    int arr[5]={2,3,3,5,2};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length-1;i++){//2
        for(int j=i+1;j<length;j++){//3//2
            if(arr[i]==arr[j]){//yes
                 if(arr[j]==isvisited){
                    continue;
                 }
                cout<<arr[i]<<endl;//2
                isvisited=arr[j];//2


            }
        }
    }
}