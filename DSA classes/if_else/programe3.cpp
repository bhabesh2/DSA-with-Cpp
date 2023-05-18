#include<iostream>;
using namespace std;

// int main(){
//      #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int saving;
//     cin>>saving;
    
//     if(saving > 5000){
//         cout<<"neha\n";
//     }else if(saving > 2000){
//         cout<<"purabi\n";
//     }else{
//         cout<<"friends\n";
//     }
//     return 0;
// }

// find max numbers::--->

// int main(){

//      #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a>b){
//         if(a>c){
//             cout<<"max is-->"<<a<<endl;
//         }else{
//             cout<<"max is-->"<<c<<endl;
//         }
//     }else{
//         if(b>c){
//             cout<<"max is-->"<<b<<endl;
//         }else{
//             cout<<"max is-->"<<c<<endl;
//         }
//     }
//     return 0;
// }

// odd or even numbers::--->

// int main(){

//      #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//   int n;
//   cin>>n;

//   if(n % 2==0){
//     cout<<"this is even"<<endl;
//   }else{
//     cout<<"this is odd"<<endl;
//   }
// }

// prime numbers

int main(){

     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

  int n;
  int count = 0;
  cin>>n;// taking input

  for(int i = 2; i <= n; i++){
    if(n % i == 0){
        count++;
    }
  }
  if(count > 1){
    cout<<"this is not a prime number"<<endl;
  }else{
    cout<<"this is a prime number"<<endl;
  }

}