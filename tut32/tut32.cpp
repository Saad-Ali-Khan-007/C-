#include<iostream>

using namespace std;
class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a,int b=12,int c=8){
            data1=a;
            data2=b;
            data3=c;
        }
        void printData(){
            cout<<"The value of data 1 , data 2 and data 3 is "<<endl;
            cout<<data1<<endl;
            cout<<data2<<endl;
            cout<<data3<<endl;
        }
};
int main(){
    Simple s(12);
    s.printData();
    return 0;
}