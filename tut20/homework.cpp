#include<iostream>

using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"Enter value one"<<endl;
    cin>>a;
    cout<<"Enter * or / or + or -"<<endl;
    cin>>c;
    cout<<"Enter value one"<<endl;
    cin>>b;
    switch (c)
    {
    case '+':
        /* code */
        cout<<"The sum is "<<a+b<<endl;
        break;
    }
    switch (c)
    {
    case '*':
        /* code */
        cout<<"The product is "<<a*b<<endl;
        break;
    }
    switch (c)
    {
    case '/':
        /* code */
        cout<<"The division is "<<a/b<<endl;
        break;
    }
    switch (c)
    {
    case '-':
        /* code */
        cout<<"The difference is "<<a-b<<endl;
        break;
    }
    return 0;
}