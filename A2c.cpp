#include <iostream>

using namespace std;

int main()
{
    const int SO_PT = 3;
    double a[SO_PT] = {23,4.1,57.05};
    int step = 0;
    for (double *cp = a; step < SO_PT; cp++) {
        step++;
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
