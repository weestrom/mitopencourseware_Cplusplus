#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    while(true)
    {
        cout << "Please enter an integer: ";
        cin >> N;
        if (N <= 0 || (N % 5) != 0) continue;
        cout << N/5 << "\n";

    }
    return 0;
}

