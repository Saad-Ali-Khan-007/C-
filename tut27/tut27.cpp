#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumcompComplex(complex, complex);
};
class complex
{
    int a, b;
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumcompComplex(complex, complex);
    friend class calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int rescomp = calc.sumcompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << rescomp << endl;

    return 0;
}