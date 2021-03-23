#include <iostream>

using namespace std;


int length(char a[])
{
    int count = 0;
    for (int i = 0; *(a + i) != '\0'; i++)
    {
        count++;
    }
    return count;
}



string rev(char a[])
{
    string b;
    for (int i = length(a) - 1; i >= 0 ; i--)
    {
        b += a[i];
    }
    return b;
}


string delete_char(char a[], char c)
{
    string b;
    for (int i = 0; i < length(a); i++)
    {
        if (a[i] != c)
            b += a[i];
    } 
    return b;   
}


string pad_right(char a[], int n)
{
    if (length(a) >= n)
        return a;
    else
    {
        int x = n - length(a);
        string b = a;
        for (int i = 0; i < x; i++)
        {
            b = b + ' ';    
        }   
        return b;
    }
}


string pad_left(char a[], int n)
{
    if (length(a) >= n)
        return a;
    else
    {
        int x = n - length(a);
        string b = a;
        for (int i = 0; i < x; i++)
        {
            b = ' ' + b;    
        }   
        return b;
    }
}


string truncate(char a[], int n)
{
    string b = a;
    if (length(a) >= n)
    {
        for (int i = n; i < length(a); i++)
        {
            b[i] = '\0';
        } 
        return b;      
    }   
    else
        return b;
}


bool is_palindrome(char a[])
{
    for (int i = 0; i < length(a) / 2; i++)
    {
        if (a[i] != a[length(a) - 1 - i])
        {
            return false;
        }
    }  
    return true;
}


string trim_left(char a[])
{
    string b = a;
    for (int i = 0; i < length(a); i++)
    {
        if (b[i] == ' ')
        {
            b[i] = '\0';
        }
        if (b[i + 1] != '\0')
            break;
    }  
    return b;    
}


string trim_right(char a[])
{
    string b = a;
    for (int i = length(a) - 1; i >= 0; i--)
    {
        if (b[i] == ' ')
        {
            b[i] = '\0';
        }
        if (b[i - 1] != '\0')
            break;
    }  
    return b;    
}
int main()
{
    char a[100];
    cin >> a;
    cout << length(a);
    cout << rev(a) << endl;
    cout << delete_char(a, 'b') << endl;
    cout << pad_right(a, 20) << "|" << endl;
    cout << pad_left(a, 20) << endl;
    cout << truncate(a, 4) << endl;
    cout << is_palindrome(a) << endl;
    cout << trim_left(a) << endl;
    cout << trim_right(a) << endl;
    return 0;
}