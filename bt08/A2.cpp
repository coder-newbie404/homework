#include <iostream>

using namespace std;

int main( )
{ 
    {
        char a[4] = "abc"; 
        for (char *cp = a; (*cp) != '\0'; cp++)
        cout << (void*) cp << " : " << (*cp) << endl;
    } 
    
    
    //tinh int
    { 
        int a[4] = {0, 1, 2, 3}; 
        for (int *cp = a; (*cp) < 4; cp++) 
            cout << (void*) cp << " : " << (*cp) << endl;
    } 
    

    //tinh double
    { 
        double a[4] = {0.5, 1.8, 2, 3.66165}; 
        for (double *cp = a; (*cp) < 4; cp++) 
            cout << (void*) cp << " : " << (*cp) << endl;
    } 

    return 0;
}
