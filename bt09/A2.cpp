#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; 
    *p2 = 100;
    cout << *p2;
    delete p2;
    return 0;
}
//lỗi do delete p quá sớm
//vùng nhớ p bị xóa nên khi dùng p2 không còn vùng nhớ
//giải phóng vùng nhớ đã giải phóng
