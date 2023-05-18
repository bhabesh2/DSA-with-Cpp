#include <iostream>;
using namespace std;

// int main(){
//     int i = 1;
//     int j = 2;
//     int k;

//     /*  1 + 2 + 1 +   2   +   3 +  4*/
//     k = i + j + i++ + j++ + ++i + ++j;

//     cout<<k<<endl; // output ---> 4;
//     return 0;
// }

int main(){
    int n = 50;

    int m = n>>1;// n/2^1
    int k = n<<1;// n*2^1;
    cout<<m<<endl;
    cout<<k<<endl;
    return 0;
}