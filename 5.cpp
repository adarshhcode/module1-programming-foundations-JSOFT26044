#include <iostream>

using namespace std;

int main() {
 string name;
 string collagename;
 int age;
 double mark;
cout<<"-------------student profile-----------";
 cout<<endl;
 cout<<"enter your name:";
 cin>>name;
 cout<<"enter your collage name:";
 cin>>collagename;
 cout<<"enter your age:";
 cin>>age;
 cout<<"enter your mark:";
 cin>>mark;
 cout<<" Name : "<<name<<"\n Collage Name : "<<collagename<<"\n Age : "<<age<<"\n Percentage:"<<mark/5.0<<"%"<<endl;    


    return 0;
}
