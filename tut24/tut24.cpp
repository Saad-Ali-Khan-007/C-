#include <iostream>

using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The employee id is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count; /// Default value is zero and if we want to start the value of count from any number we can write it beside count

int main()
{
    Employee saad, anas, muzammil;
    // count is the static data member of class employee
    saad.setData();
    saad.getData();
    Employee::getCount();

    anas.setData();
    anas.getData();
    Employee::getCount();

    muzammil.setData();
    muzammil.getData();
    Employee::getCount();

    return 0;
}