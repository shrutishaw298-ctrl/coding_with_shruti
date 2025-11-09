#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int gcd(int n1,int n2){
    int commondivisior, max=INT_MIN,store,c=0;
    int isvisited=INT_MAX;
    int length = n1<n2 ? n1:n2;//12<18
    for(int i=1;i<=length;i++){//1<12
        if(n1%i==0 and n2%i==0){//true true true true
            commondivisior=i;//1 2 3 6
           // cout<<commondivisior;
        }
        if(commondivisior==isvisited){
            continue;
        }
        //
        //
        if(max<commondivisior){
            max=commondivisior;
           // cout<<" the greteast common factor is : "<<max<<endl;
        }
        isvisited=commondivisior;//1 2 3 6
       
    }
   // cout<<" the greatest common factor between " <<n1 << n2<<" is "  <<  max<<endl;
   return max;
        

    }

int main(){
    int number1=100,number2=200,result=0;
   // cout<<" enter the two numbers "<<endl;
   // cin>>number1;
   // cin>>number2;
    int result= gcd(number1,number2);
    cout<<" the greatest common factor between "<< number1 << " and " <<  number2 <<" is :"<<result<<endl;
}