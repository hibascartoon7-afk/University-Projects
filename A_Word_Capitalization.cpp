#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    cin >> arr;
    int c;
    
    if ( arr[0] >='A' && arr[0] <= 'Z')
    {
        cout << arr;
    }
    else 
    {
      arr[0] =  arr[0] - 32;
      cout << arr;
    }
  
}