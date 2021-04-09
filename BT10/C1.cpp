#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str;

    String(const char* c)
    {
        str = new char;
        n = strlen(c);
        for (int i = 0; i < n; i++)
        {
            str[i] = c[i];   
        }
    }

    ~String()
    {
        delete [] str;
    }

    void print()
    {
        cout << str << endl;
    }

    void append(const char* s)
    {
        int n2 = strlen(s) + n;
        char* tmp = new char;
        for (int i = 0; i < n2; i++)
        {
            if (i < n)
                tmp[i] = str[i];
            else
                tmp[i] = s[i - n];
        }
        str = tmp;
    }
};

int main()
{
    String first("Hi ");
    first.append("there");
    first.print();
}