#include<iostream>
#include<vector>

using namespace std;

int main(){
    int search_element,size;
    cout<<" enter the size of an array "<<endl;
    cin>>size;
    int arr[size];
    cout<<" enter the array elements;"<<endl;
    for(int i=0;i<size;i++){
        cout<<" elements at " <<i+1<< " is "<<endl;
        cin>>arr[i];
    }
    cout<<" enter the search element : "<<endl;
    cin>>search_element;
    for(int i=0;i<size;i++){
        if(arr[i]==search_element){
            cout<<" element is found at "<<i<<" and its value is : "<<arr[i]<<endl;
        }
    }
}