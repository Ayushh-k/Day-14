#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int length, breadth;
    rectangle(int a, int b)
    {
        length = a;
        breadth = b;
    }

    rectangle(rectangle &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }
};

int main()
{

    int length, breadth;
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    rectangle rec1(length, breadth);

    rectangle rec2(rec1);

    cout << "Length of rec2 = " << rec2.length << "\nBreadth of rec2 = " << rec2.breadth << endl;
}