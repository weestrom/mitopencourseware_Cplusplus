#include <iostream>

using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    double r = 5.0;
    double circle;

    circle = 2 * PI * r; //circle = 2 * 3.14159 * r;
    cout << "A circle with a radius of " << r << " has a circumference of " << circle << NEWLINE;
        //cout << "A circle with a radius of " << r << " has a circumference of " << circle << '\n';

    const int pathwidth = 100;
    //pathwidth = 2; //this will cause a compiler error
    const char tabulator = '\t';
    cout << "tabulator = \"" << tabulator << "\"\n";

    cout << "\ni++ looped 0 to < 10: \n";

    //output 0 through 9
    for(int i = 0; i < 10;)
    {
        cout << i++ << "\n";
    }

    cout << "\n++i looped 0 to < 10: \n";

    //output 1 through 10
    for(int i = 0; i < 10;)
    {
        cout << ++i << "\n";
    }
    return 0;
}
