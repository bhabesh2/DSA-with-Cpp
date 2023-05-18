#include <iostream>;
#include <math.h>;
using namespace std;

// prime number check;

// bool isPrime(int n){
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"it is a prime"<<endl;
//     }else{
//         cout<<"it is not a prime"<<endl;
//     }

//     return 0;
// }

// prime number between two numbers;

// bool isPrime(int n){
//     for(int i = 2; i <= sqrt(n); i++){
//         if(n % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;

//     for(int i = n; i <= m; i++){
//     if(isPrime(i)){
//         cout<<i<<endl;
//     }
//     }

//     return 0;
// }

// fibonacci numbers;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextNum = 0;

    for(int i = 1; i <= n; i++){
        cout<<t1<<endl;
        nextNum = t1 + t2;
        t1 = t2;
        t2 = nextNum;
    }
    return;
}

int main(){
    int n;
    cin>>n;

    fib(n);

    return 0;
}

// factorial number;

// int fact(int n){
//     int factorial = 1;
//     for( int i = 2; i <=n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = fact(n);
//     cout<<ans<<endl;
//     return 0;
// }

// factorial nCr

// int fact(int n){
//     int factorial = 1;
//     for(int i = 2; i <= n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;

//     int ans = fact(n)/(fact(r) * fact(n - r));
//     cout<<ans<<endl;
//     return 0;
// }

// pascel triangle;

// int fact(int n){
//     int factorial = 1;
//     for(int i = 2; i <= n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

