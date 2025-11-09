#include<iostream>
#include<string>
#include <climits> 
#include<vector>
using namespace std;
int main(){
    int size,i, max=INT_MIN, min=INT_MAX;
    int arr[5]={5,7,4,2,3};
      int length =sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<length;i++){
        if( max<arr[i]){
            max=arr[i];
            
        }
        if(min>arr[i]){
            min =arr[i];
        }
    }
    cout<<" maximum element in an array is : "<<max<<endl;
    cout<<" the minimum element in an array is : "<<min<<endl;

    
    
    
    
} 
    

    





