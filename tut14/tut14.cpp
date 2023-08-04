#include<iostream>

using namespace std;

struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
};
union money 
{
    int rice;
    char car;
    float pounds;
};

int main(){
    struct employee saad;
    struct employee anus;
    saad.eid=481;
    saad.favchar='s';
    saad.salary=1200000000000000;
    cout<<"the value is "<<saad.eid<<endl;
    cout<<"the value is "<<saad.favchar<<endl;
    cout<<"the value is "<<saad.salary<<endl;
    return 0;
}