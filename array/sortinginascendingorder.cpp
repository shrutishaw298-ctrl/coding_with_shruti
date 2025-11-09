#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<" enter "<< n <<" array elements\n\n ";
    for( int i=0;i<n;i++){
        cout<<" element"  <<(i+1)<<  " is "<<endl;
        cin>>arr[i];
    }
    cout<<" unsorted array elements " <<endl;
    for( int i=0;i<n;i++){
        cout<<arr[i];//44,55,88,77,99
       cout<<endl;
    }
    for( int i=0;i<(n-1);i++){
        for( int j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;

        }
    }
    cout<<" after sorting the array elements : ";
    for( int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }
        
        
    
    return 0;
}