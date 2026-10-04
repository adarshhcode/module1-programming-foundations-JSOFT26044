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
    if(op=='+')
     cout<<a+b;
    else if (op=='-')
    {
        cout<<a-b;
    }
    else if (op=='*')
    {
        cout<<a*b;

    }
    else if (op=='/')
    {
        cout<<a/b;
    }
    else
     cout<<"Invalid operator";
    
    return 0;
}
