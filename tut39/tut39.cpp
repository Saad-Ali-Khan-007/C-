#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
};
class Derived: protected Base {
    
};
int main(){
    Base b;
    Derived d;
    //cout<<d.a;//will now work because it is protected
    return 0;
}