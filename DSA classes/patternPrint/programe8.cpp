#include<iostream>;
using namespace std;

// rectangle pattern;

// int main(){
//     int row,col;
//     cout<<"enter you two numbers:"<<endl;
//     cin>>row>>col;

//     for(int i = 1; i <= row; i++){
//         for(int j = 1; j <= col; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//holo pattern;

// int main(){
//     int row,col;
//     cout<<"enter you two numbers:"<<endl;
//     cin>>row>>col;

//     for(int i = 1; i <= row; i++){
//         for(int j = 1; j <= col; j++){
//             if(i == 1 || i == row || j == 1 || j == col){
//             cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// inverted pattern;

// int main(){
//     int row;
//     cout<<"enter you two numbers: "<<endl;
//     cin>>row;

//     for(int i = row; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             cout << "*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// half pyramid after 180 deg rotation;

// int main (){
//     int n;
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }    
    
//     return 0;
// }

// half pyramid using numbers;

// int main (){
//     int n;
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }    
    
//     return 0;
// }

// floyd's triangle;

// int main(){
//     int n;
//     cin>>n;
//     int count = 0;

//     for(int i = 0; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             count++;
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// butterfly pattern;

// int main(){
//     int n; 
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int j = 1; j <= space; j++){
//             cout<<" ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
        
//         cout << endl;
//     }

//       for(int i = n; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
//         int space = 2*n - 2*i;
//         for(int j = 1; j <= space; j++){
//             cout<<" ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout<<"*";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }

