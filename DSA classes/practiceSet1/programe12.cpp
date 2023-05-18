
#include <bits/stdc++.h>
using namespace std;

// sum of n natural number.

// int sum(int n){
//     int ans = (n*(n+1)/2);
//     return ans;
// }

// int32_t main(){
//     int n;
//     cin >> n;

//     cout<<sum(n)<<endl;
//     return 0;

// }

// pythagorean triplet;

// bool isTriplet(int x, int y, int z){
//     int a = max(x, max(y,z));
//     int b,c;

//     if(a == x){
//         b = y;
//         c = z;
//     }
//     else if(a == y){
//         b = x;
//         c = z;
//     }
//     else{
//         b = x;
//         c = y;
//     }
//     if(a*a == b*b + c*c){
//         return true;
//     }
//     return false;
// }


// int32_t main(){
//     int x,y,z;
//     cin >> x >> y >> z;

//     if(isTriplet(x,y,z)){
//         cout<<"triplet"<<endl;
//     }
//     else{
//         cout<<"not a triplet"<<endl;
//     }

//     return 0;

// }

/*
// binaryTodecimal;

int binaryTodecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int lastdigit = n % 10;
        ans += lastdigit * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int32_t main(){
    int n;
    cin >> n;

    cout<<binaryTodecimal(n)<<endl;

    return 0;
}
*/

/*

octatodecimal::

int octalTodecimal(int n){
    int ans = 0;
    int x = 1;

    while(n > 0){
        int lastdg = n % 10;
        ans += lastdg * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int32_t main(){
    int n;
    cin >> n;

    cout<<octalTodecimal(n)<<endl;

    return 0;
}

*/

/*
int hexaTodecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();

    for(int i = s-1; i >=0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int32_t main(){
    string n;
    cin >> n;

    cout<<hexaTodecimal(n)<<endl;

    return 0;
}
*/


/*
int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while(x <= n)
        x *= 2;
    x/=2;

    while(x > 0){
        int lastdigit = n / x;
        n -= lastdigit * x;
        x/=2;
        ans = ans *10 + lastdigit;
    }
    return ans;
}

int decimalTooctal(int n){
    int ans = 0;
    int x = 1;
    while(x <= n)
        x *= 8;
    x/=8;

    while(x > 0){
        int lastdigit = n / x;
        n -= lastdigit * x;
        x/=8;
        ans = ans *10 + lastdigit;
    }
    return ans;
}

string decimalTohexa(int n){
    string ans = "";
    int x = 1;
    while(x <= n)
    x *= 16;
    x /= 16;

    while(x > 0){
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;

        if(lastdigit <= 9){
            ans += to_string(lastdigit);
        }
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main(){
    int n;
    cin >> n;

    cout<<decimalTohexa(n)<<endl;

    return 0;
}
*/

// ad two binaryNumber
/*

int reverse(int n){
    int ans = 0;
    while(n > 0){
        int lastdit = n % 10;
        ans = ans * 10 + lastdit;
        n /= 10;
    }
    return ans;
}

int addBinary(int n,int m){
    int ans = 0;
    int previousCarry = 0;

    while(n >0 && m >0){
        if((n % 2 == 0) && (m % 2== 0)){
            ans = ans * 10 + previousCarry;
            previousCarry = 0;
        }
        else if((n % 2 == 0 && m % 2== 1) || (n % 2==1 && m % 2 == 0)){
            if(previousCarry == 1){
                ans = ans * 10 + 0;
                previousCarry = 1;
            }
            else{
                ans = ans * 10 + 1;
                previousCarry = 0;
            }
        }
        else{
            ans = ans * 10 + previousCarry;
            previousCarry = 1;
        }
        n /= 10;
        m /= 10;
    }
    while(n >0 || m > 0){
        if(previousCarry == 1){
            if(n%2 ==1 && m%2 == 1){
                ans = ans * 10 + 1;
                previousCarry = 1;
            }
            else if(n%2 ==1 || m%2 == 1){
                ans = ans * 10 + 0;
                previousCarry = 1;
            }
            else{
                ans = ans * 10 + 1;
                previousCarry = 0;
            }
        }
        else{
            if(n>0){
                ans = ans * 10 + (n % 2);
                n/=10;
            }
            if(m>0){
                ans = ans * 10 + (m % 2);
                m/=10;
            }
        }
    }
    if(previousCarry == 1){
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);
    return ans;
}

int main(){
    int n,m;
    cin>> n >> m;

    cout<< addBinary(n,m)<<endl;
    return 0;
}

*/