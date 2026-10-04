#include <iostream>

using namespace std;

int main() {
 double a,b;
    cout<<"enter the number";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else if(a<b){
        cout<<a<<" is less than "<<b;
    }
    else{
        cout<<a<<" is equal to "<<b;
    }    


    return 0;
}
