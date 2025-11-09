#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN,smax=INT_MIN;
    int arr[4]={-3,-3,-2,-2};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<length<<endl;
     for(int i=0;i<length;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];

            }
        else if(arr[i]>smax){
            smax=arr[i];
        }
            
        }
        
        
    
    cout<<smax;

    return 0;

}