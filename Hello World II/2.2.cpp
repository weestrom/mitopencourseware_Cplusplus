#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Please enter a nonnegative integer: ";
    cin >> n;

    cout << "\n" << n << " times with a for loop:\n";

    for(int i = 0; i < n; i++)
        cout << "Hello, World!\n";


    cout << "\n" << n << " times with a while loop:\n";

    int i = 0;
    while(i < n) {
        cout << "Hello, World!\n";
        i++;
    }

    cout << "\n" << n << " times with a do...while loop:\n";

    i = 0;
    do {
        cout << "Hello, World!\n";
        i++;
    } while(i < n);

    return 0;
}
