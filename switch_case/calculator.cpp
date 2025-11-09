#include<iostream>
using namespace std;

int main(){
    int a=5,b=4;
    char op='/';
    //std::cout<<"enter the operator for doing operation";
    //std::cin>>op;
    switch(op){
        case '+': std::cout<<(a+b)<< std::endl;
                    break;
        case '*':std::cout<<(a*b)<<endl;
                    break;
        case '%': cout<<(a%b)<<endl;
                    break;
        case'/': cout<<(a/b)<<endl;
                    break;            
    }



}