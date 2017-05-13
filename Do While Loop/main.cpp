#include <iostream>

using namespace std;

int main()
{
    cout << "First For Loop\n";
    for(int x = 0; x < 10; x++)
        cout << x << "\n";


    cout << "\nSecond For Loop\n";
    int x = 0;
    for(; x < 10; x++)
        cout << x << "\n";

    cout << "\nWhile Loop Equivalent\n";
    x = 0;
    while(x < 10) {
        cout << x << "\n";
        x++;
    }


    return 0;
}
