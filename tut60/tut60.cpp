#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="Saad Ali Khan";
    string st2;
    // ofstream out("sample60.txt");
    // out<<st;
    ifstream in("sample60.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}