#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, t;
    cin >> n;
    t = n;

    while (n) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }

    cout << (sum == t ? "Armstrong" : "Not Armstrong");
}