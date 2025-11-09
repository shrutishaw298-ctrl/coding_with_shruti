// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     cout<<" enter the number to check weather the number is prime or not :  \n";
//     cin>> n;
//     if(n<=1){
//        cout<<(" please enter the number greater than 1");
//         return false;
//     }
   
//     bool isPrime=true;
//     for (int i=2;i<=n/2;i=i+2){   // 
//         if( n%i==0){
//             isPrime=false;
//             break;
//         }
        
//     }
// if(isPrime) {
//     cout<<(" the number is prime number ");
// }else{
//     cout<<(" the number is not prime number ");

// }
//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number to check whether it is prime or not: ";
    cin >> n;

    if (n <= 1) {
        cout << "Please enter a number greater than 1";
        return 0; // use 0, not false (since main() returns int)
    }

    bool isPrime = true;
    for (int i = 2; i <= n/2; i++) {  // check all divisors
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "The number is prime";
    } else {
        cout << "The number is not prime";
    }

    return 0;
}

    
        
    
    
    
    
