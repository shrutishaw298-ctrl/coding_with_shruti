#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<" enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<" enter the array elements : \n";
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<" elements "<<i+1<<endl;
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum of all array elemnts are : "<< sum <<endl;








    return 0;
}