#include <iostream>

using namespace std;

int main()
{
    int arg1;
    arg1 = -1;
    {
        char arg1 = 'A';
    }
    cout << arg1 << "\n"; //The outer declaration of arg1 (== -1) is used here
    return 0;
}
