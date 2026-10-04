#include <iostream>

using namespace std;

int main() {
 double a,b;
 char op;
    cout<<"enter the number" ;
    cin>>a;
    cout<<" +  -  *  / ";
    cin>>op;
    cout<<"enter the number";
    cin>>b;   
    switch(op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if(b==0)
                cout<<"Division by zero not working";
            else
                cout<<a/b;
            break;
        default:
            cout<<"Invalid operator";
    }    


    return 0;
}
