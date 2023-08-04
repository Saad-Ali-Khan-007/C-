#include <iostream>
#include <cmath>
using namespace std;
class points
{
    int x, y;

public:
    friend void distance(points o1, points o2);
    points(int a, int b)
    {
        x = a;
        y = b;
    }
    void printpoints()
    {
        cout << "The point is ( " << x << " , " << y << " ) " << endl;
    }
};
void distance(points o1, points o2)
{
    cout << o1.x << endl;
    cout << o2.x << endl;
    cout << o1.y << endl;
    cout << o1.y << endl;
    cout << sqrt(pow((o1.x - o2.x), 2) + (pow((o1.y - o2.y), 2))) << endl;
};

int main()
{
    int p, q;
    cout << "enter x1" << endl;
    cin >> p;
    cout << "enter y1" << endl;
    cin >> q;
    int r, s;
    cout << "enter x2" << endl;
    cin >> r;
    cout << "enter y2" << endl;
    cin >> s;
    points a(p, q);
    points b(r, s);
    
    a.printpoints();
    b.printpoints();
    distance(a,b);
    return 0;
}