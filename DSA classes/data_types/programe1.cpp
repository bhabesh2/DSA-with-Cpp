#include<iostream>
using namespace std;

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif
//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<a+b+c<<"\n";
//     return 0;
// }

int main(){
    int a; // declaration
    a = 12; // initialisation
    cout<<"size of int-->"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float-->"<<sizeof(b)<<endl;

    char c;
    cout<<"size of char-->"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool-->"<<sizeof(d)<<endl;

    short int si;
    cout<<"size of shortint-->"<< sizeof(si)<<endl;

    long int li;
    cout<<"size of longint-->"<< sizeof(li)<<endl;
}