#include <iostream>

using namespace std;

struct Point
{
    float x;
    float y;
    Point(float _x, float _y)
    {
        x = _x;
        y = _y;
    }

    void print()
    {
        cout << "(" << x << ", " << y << ")";
    }

};

int main()
{
    Point b(2, 3);
    cout << endl << &b << endl << &b.x << endl << &b.y;
}