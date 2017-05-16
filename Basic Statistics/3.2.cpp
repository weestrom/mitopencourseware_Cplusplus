#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int vecSize = 0;
    cout << "How many integers will you enter? ";
    cin >> vecSize;
    vector<int> intVector (vecSize, 0);


    int vecSum = 0;
    int vecMax = 0;
    int vecMin = 2<<sizeof(int);
    for(vector<int>::iterator it = intVector.begin(); it != intVector.end(); ++it)
    {
        cin >> *it;
        vecSum += *it;
        if(*it > vecMax) vecMax = *it;
        if(*it < vecMin) vecMin = *it;
    }
    cout << "\n";

    double vecMean = vecSum / vecSize;
    int vecRange = vecMax - vecMin;

    cout << "Mean: " << vecMean << "\n";
    cout << "Max: " << vecMax << "\n";
    cout << "Min: " << vecMin << "\n";
    cout << "Range: " << vecRange << "\n";
    return 0;
}
