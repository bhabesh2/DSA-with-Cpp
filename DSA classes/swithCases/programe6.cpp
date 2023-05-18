// we use switch statements to execute multiple if else conditions.

#include <iostream>;
using namespace std;

// int main(){
//     char button;
//     cout<<"input a character:"<<endl;
//     cin>>button;

//     // if(button=='a'){
//     //     cout<<"hello"<<endl;
//     // }
//     // else if(button=='b'){
//     //     cout<<"namste"<<endl;
//     // }
//     // else if(button=='c'){
//     //     cout<<"hola"<<endl;
//     // }
//     // else{
//     //     cout<<"bye"<<endl;
//     // }
//     // note don't use double quotes in c++ it will give an error.

// switch (button)
// {
// case 'a':
//     cout<<"hello"<<endl;
//     break;
// case 'b':
//     cout<<"namaste"<<endl;
//     break;
// case 'c':
//     cout<<"halo"<<endl;
//     break;
// case 'd':
//     cout<<"i am on"<<endl;
//     break;
// case 'e':
//     cout<<"how are you"<<endl;
//     break;

// default:
//     cout<<"input is not valid";
//     break;
// }
// return 0;
// }

// calculator;

int main(){
    int num1,num2;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;

    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<num1 + num2<<endl;
        break;
    case '-':
        cout<<num1 - num2<<endl;
        break;
    case '*':
        cout<<num1 * num2<<endl;
        break;
    case '/':
        cout<<num1 / num2<<endl;
        break;
    case '%':
        cout<<num1 % num2<<endl;
        break;
    
    default:
        cout<<"enter the next operator";
        break;
    }
    return 0;
}
