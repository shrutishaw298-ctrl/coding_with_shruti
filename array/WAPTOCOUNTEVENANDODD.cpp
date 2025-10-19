#include<iostream>
#include<vector>
 
using namespace std;
int main(){
    int c1=0,c2=0;
    int arr[5]={2,-4,-2,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            c1++;   
        }
        else{
           // cout<<arr[i]<<" is an odd number "<<endl;
           c2++;
        
        }
        
    }
    cout<<c1<<endl;
    cout<<c2<<endl;
}