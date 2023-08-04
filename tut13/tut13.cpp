#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    int len = str.length();
    int i = len;
    while(i--)
        cout << str[i];
}
int main()
{
    //     //array example
    //     int marks[4] = {23 , 43 , 63 , 93};
    //     int mathMarks[]={};
    //    cin>>mathMarks[0];
    //    cout<<mathMarks[0];
    //     // mathMarks[1];
    //     // mathMarks[2];
    //     // mathMarks[3];
    //     cout<<"these are math marks"<<endl;

    //     cout<<mathMarks[0]<<endl;
    //     cout<<mathMarks[1]<<endl;
    //     cout<<mathMarks[2]<<endl;
    //     cout<<mathMarks[3]<<endl;

    //     cout<<"these are random marks"<<endl;
    //     cout<<marks[0]<<endl;
    //     cout<<marks[1]<<endl;
    //     cout<<marks[2]<<endl;
    //     cout<<marks[3]<<endl;

    //     for (int i = 0; i < 4; i++)
    //     {
    //         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     }
    //     // int i=0;
    //     // while(i<4){
    //     //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     //     i++;
    //     // }
    //     int i=0;
    //     do {
    //          cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //         i++;
    //     }while(i<4);

    //     //pointers and arrays
    //     int* p=marks;
    //     cout<<"the value at adress *p is "<<*p<<endl;
    //     cout<<"the value at adress *(p+1) is "<<*(p+1)<<endl;
    //     cout<<"the value at adress *(p+2) is "<<*(p+2)<<endl;
    //     cout<<"the value at adress *(p+3) is "<<*(p+3)<<endl;
    //     cout<<"the value at adress *(p+4) is "<<*(p+4)<<endl;

    // cin>>k[0];
    // cin>>k[1];
    // cin>>k[2];
    // cin>>k[3];
    // cin>>k[4];
    // cin>>k[5];
    // cin>>k[6];
    // cin>>k[7];
    // cin>>k[8];
    // cin>>k[9];
    // cin>>k[10];

    // int k[10] = {};
    // int temp;
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout << "Enter the number" << endl;
    //     cin >> k[i];
    // }

    // for (int j = 0; j < 10; j++)
    //     for (int i = 0; i < 10; i++)
    //     {//for descending use greater than sign below after k[i]
    //         if (k[i] > k[i + 1])
    //         {
    //             /* code */
    //             temp = k[i];
    //             k[i] = k[i + 1];
    //             k[i + 1] = temp;
    //         }
    //     }

    // cout << "It is in ascending order" << endl;

    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */

    //     cout << "The value of " << i << " is " << k[i] << endl;
    // }


    string Brand;
    cout<<"Type now"<<endl;
    cin>>Brand;

//    reverse(Brand.begin(), Brand.end());

    

    cout<<"The result is :"<<endl;
    

    reverse(Brand);

    return 0;
}

