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

Point mid_point(const Point a, const Point b)
{
    Point m(0, 0);
    m.x = (a.x + b.x) / 2;
    m.y = (a.y + b.y) / 2;
    return m;
}

int main()
{
    Point b(2, 3);
    Point c(5, 7);
    mid_point(b, c).print();
}