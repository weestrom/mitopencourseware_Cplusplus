#include <iostream>

using namespace std;

int main()
{
    int numPrimes = 0;
    int num = 2;
    int numPrinted = 0;
    cout << "How many primes should I print? ";
    cin >> numPrimes;

    bool flag = true;

    while(flag)
    {
        bool isPrime = true;
        for(int primeTest = 2; primeTest < num; primeTest++)
        {
            if((num % primeTest) == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            cout << num << "\n";
            numPrinted++;

        }
        if(numPrinted == numPrimes)
            flag = false;
        num++;
    }
    return 0;
}
