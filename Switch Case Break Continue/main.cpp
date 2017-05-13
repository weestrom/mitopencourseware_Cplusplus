#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Please type an integer n between 0 and 9: ";
    cin >> n;

    switch(n) {
        case 0:
            cout << "You typed zero.\n";
            break;
        case 1:
        case 4:
        case 9:
            cout << "n is a perfect square.\n";
            break;
        case 2:
            cout << "n is an even number.\n";
        case 3:
        case 5:
        case 7:
            cout << "n is a prime number.\n";
            break;
        case 6:
        case 8:
            cout << "n is an event number.\n";
            break;
        default:
            cout << "Only single-digit positive numbers are allowed.\n";
    }

    cout << "\nOutputs first 10 positive integers: \n";
    int i = 1;
    while(true)
    {
        if(i > 10)
            break;
        cout << i << "\n";
        i++;
    }

    cout << "\nPrints out even numbers in range from 1 to 10: \n";
    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
            continue; //skips all odd numbers
        cout << i << "\n";
    }

    return 0;

}
