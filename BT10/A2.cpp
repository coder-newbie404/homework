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

void dupli(Point a)
{
    cout << &a.x << " " << &a.y << endl;
}

void duplip(Point* a)
{
    cout << &a->x << " " << &a->y << endl;
}

int main()
{
    Point b(2, 3);
    cout << &b.x << " " << &b.y << endl;
    dupli(b);
    
    Point* c;
    cout << &b.x << " " << &b.y << endl;
    duplip(c);
}