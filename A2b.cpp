#include <iostream>

using namespace std;

int main()
{
    const int SO_PT = 3;
    int a[SO_PT] = {23,7,2002};
    int step = 0;
    for (int *cp = a; step < SO_PT; cp++) {
        step++;
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
