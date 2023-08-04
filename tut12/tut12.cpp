#include<iostream>

using namespace std;

int main(){
    int a=3;
    int* b=&a;
    //adress
    cout<<"The adress of a in our ram is "<<b<<endl;
    cout<<"The adress of a in our ram is "<<&a<<endl;
    // value at adress
    cout<<"The value of a in our ram is "<<*b<<endl;
    //pointer to pointer
    int** c=&b;
    cout<<"the adress of b in our ram is "<<c<<endl;
    cout<<"the adress of b in our ram is "<<&b<<endl;
    cout<<"the value of b in our ram is "<<**c<<endl;
    return 0;
}