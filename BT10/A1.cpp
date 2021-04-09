#include <iostream>

using namespace std;

struct Point
{
    int x;
    int y;
    Point(int _x, int _y)
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
    b.print();
}