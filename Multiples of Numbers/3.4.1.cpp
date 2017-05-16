#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    while(true)
    {
        cout << "Please enter an integer: ";
        cin >> N;
        (N > 0 && (N % 5) == 0) ? cout << N/5 << "\n": cout << -1 << "\n";

    }
    return 0;
}
