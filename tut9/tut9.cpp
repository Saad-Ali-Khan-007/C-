#include<iostream>

using namespace std;

int main(){
    // cout<<"This is tutoral 9";
    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"You can not enter"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid you will get a kid pass "<<endl;
    // }
    // else if (age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else {
    //     cout<<"you can come to the party"<<endl;
    // }

switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 12:
    cout<<"you are 12"<<endl;
    break;

default:
    cout<<"no special cases"<<endl;
    break;
}
    cout<<"Done with switch cases";
    return 0;
}