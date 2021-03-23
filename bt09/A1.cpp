#include <iostream>
#include <cstring>
using namespace std;

char* concat(const char* a, const char* b)
{
    int n = sizeof(a) + sizeof(b);
    char* resu = new char[n];
    strcpy(resu, a);
    strcat(resu, b);
    return resu;
}
int main()
{
    char a[]="Hello";
    char b[]="World";
    cout << sizeof(a) << sizeof(b) << endl;
    cout<<concat(a,b);
}