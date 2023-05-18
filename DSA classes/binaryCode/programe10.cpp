
#include <iostream>;
#include <math.h>;
using namespace std;

// decimal to binary;

// int main(){
//     int n;
//     cin>>n;

//     int binary[32];
//     int i = 0;

//     while(n > 0){
//         binary[i] = n%2;
//         n /= 2;
//         i++;
//     }

//     for(int j = i-1; j >= 0; j--){
//         cout<<binary[j];
//     }
//     cout<<endl;
//     return 0;
// }

// binary to decimal;

int main() {
    int binary, decimal = 0, i = 0;
    cin >> binary;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, i);
        i++;
        binary /= 10;
    }

    cout << decimal<<endl;
    return 0;
}