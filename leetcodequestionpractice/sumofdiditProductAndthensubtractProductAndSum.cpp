#include<iostream>
#include<string>

using namespace std;
int main(){
    int n=234;
    int r,sum=0,product=1,subtract;
    while(n>0){
        r=n%10;//4 3 2
        sum+=r;
        product=product*r;
        n=n/10;//23//2

    }
    cout<<" sum of "<<n<<sum<<endl;
    cout<<"product of "<<n<<product<<endl;
    subtract=product-sum;
    cout<<"Subtract sum from product "<<subtract;

}