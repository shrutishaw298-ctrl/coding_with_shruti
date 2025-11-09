#include<iostream>
#include<climits>
using namespace std;
void printfibonacci(int n ){
    int sum=1;
    for(int i=1;i<n;i++){

        sum+=i;
        cout<<sum<<",";
        

    }


}
int main(){
    int range=20;
    //cout<<" enter the number upto which you want fibonacci series : "<<endl;
   // cin>>range;
    printfibonacci(range);


}

