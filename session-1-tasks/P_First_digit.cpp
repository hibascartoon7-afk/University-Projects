#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 999)
    {
        cout << "EVEN";
    
    }
    else 
    {
        n = n / 1000;
       if (n % 2 == 0)
       {
           cout << "EVEN";
       }
       else 
       {
           cout << "ODD";
       } 
    }
}