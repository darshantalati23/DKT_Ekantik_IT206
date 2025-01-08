#include <iostream>
#include <cmath>
using namespace std;

void toh(int src, int des, int help, int n) {
    if (n == 1)
        cout << "Transfer disc from " << src << " to " << des << endl;
    else {
        toh(src, help, des, n - 1);
        cout << "Transfer disc from " << src << " to " << des << endl;
        toh(help, des, src, n - 1);
    }
    return;
}

int main() {
    int n;
    cout << "Enter number of discs: ";
    cin >> n;
    cout << "Number of steps = " << (1L << n) - 1 << endl;
    toh(1, 3, 2, n);
    return 0;
}
