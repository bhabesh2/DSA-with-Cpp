#include <bits/stdc++.h>
using namespace std;

// write a function for a prime num check;

bool chekPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
        return true;
}

int main(){
    int n;
    cin>>n;

    if(chekPrime(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not a prime"<<endl;
    }
    return 0;
}

// write a programme to print all the digits from right to left.(reverse)

// int main(){
//     int n;
//     cin>>n;

//     int ans = 0;
//     while(n>0){
//         int lastNum = n % 10;
//         ans = ans * 10 + lastNum;
//         n /= 10;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// write a programme to print all the digits from right to left.

// int main(){
//     int n;
//     cin>>n;

//     while(n > 0){
//         int lastNum = n % 10;
//         cout<<lastNum<<endl;
//         n /= 10;
//     }
//     return 0;
// }

// Write a program to check if a number is Armstrong number

// void checkArmstrong(int n){
//     int original = n;
//     int sum = 0;
//     while(n > 0){
//         int lastDigit = n % 10;
//         sum += pow(lastDigit, 3);
//         n /= 10;
//     }
//     if(sum == original){
//         cout<<"it's Armstrong"<<endl;
//     }else{
//         cout<<"it's not an Armstrong"<<endl;
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;

//     checkArmstrong(n);
//     return 0;
// }

// Write a program to print the ASCII value of any given character.

// int main(){
//     char c;
//     cin>>c;

//     int ascii = c;

//     cout<<ascii<<endl;
//     return 0;
// }

// Write a program to display all factors of a number.

// void factors(int n){
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             cout<<i<<endl;
//         }
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;

//     factors(n);
//     return 0;
// }

// Write a program to find the factorial of a given number.

// void factorial(int n){
//     int factorial = 1;
//     for(int i = 2; i <= n; i++){
//         factorial *= i;
//     }
//     cout<<factorial<<endl;
//     return;
// }

// int main(){
//     int n;
//     cin>>n;

//     factorial(n);
//     return 0;
// }

// Write a program to find whether a given character is a vowel or a consonant.

// void checkVowel(char c){
//     char alpha = tolower(c);
 
//     if(alpha == 'a'|| alpha == 'e'|| alpha == 'i'|| alpha == 'o'|| alpha == 'u'){
//         cout<<"vowel"<<endl;
//     }
//     else{
//         cout<<"consonant"<<endl;
//     }
//     return;
// }

// int main(){
//     char c;
//     cin>>c;

//     checkVowel(c);
//     return 0;
// }