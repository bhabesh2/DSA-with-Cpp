// continue and break;
// continue is used to skip the next iteration of the loop.
// break is used to terminate the loop.
#include<iostream>
using namespace std;

// int main(){

// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n;
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         if(i % 2 == 0){
//             continue;
//         }
//         cout<<i<<"\n";
//     }
//     return 0;
// }

// prime number check;

// int main(){

// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n;
//     cin>>n;
//     int count = 0;

//     for(int i = 2; i <= n; i++){
//         if(n % i == 0){
//             count++;
//         }
//     }
//     if(count > 1){
//         cout<<"this is not a prime number"<<endl;
//     }else{
//         cout<<"this is prime"<<endl;
//     };
//     return 0;
// }

// 2nd type;

// int main(){

// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n;
//     cin>>n;
//     int i;
//     for(i = 2; i < n; i++){
//         if(n % i == 0){
//             cout<<"not a prime"<<endl;
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"prime"<<endl;
//     }
//     return 0;
// }

// print all the prime numbers;

int main(){

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a,b;
    cin>>a>>b;

    for(int num = a; num < b; num++){
        int i;
        for(i = 2; i < num; i++){
            if(num % i == 0){
                break;
            }
        }
        if(i == num){
            cout<<i<<endl;
        }
    }
    
    return 0;
}