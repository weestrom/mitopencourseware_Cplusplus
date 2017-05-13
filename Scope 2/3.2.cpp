#include <iostream>

using namespace std;

int main()
{
    int arg1; //generates "warning: variable 'arg1' set but not used [-Wunused-but-set-variable]
    arg1 = -1;
    {
        char arg1 = 'A';
        cout << arg1 << "\n"; //outputs 'A' to shell
    }
    return 0;
}
