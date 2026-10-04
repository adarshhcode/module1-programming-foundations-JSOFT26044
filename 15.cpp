#include <iostream>

using namespace std;

int main() {
 int mark;
    cout<<"enter your mark:";
    cin>>mark;
    if (mark<0||mark>100)
        {
            cout<<"invalid";
        }
    else if (mark >= 40)
        {
            cout << "Pass";
        }
    else
        cout << "Fail";    


    return 0;
}
