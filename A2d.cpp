//Đoán trước: Con trỏ chạy từ a[0], a[2], a[4], ... 

#include <iostream>

using namespace std;

int main()
{
    const int SO_PT = 5;
    double a[SO_PT] = {5.11, 4.1, 57.05, 23, -7};
    int step = 0;
    for (double *cp = a; step < SO_PT; cp += 2) {
        step++;
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}