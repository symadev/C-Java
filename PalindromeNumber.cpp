#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, t;
    cin >> n;
    t = n;

    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    cout << (t == rev ? "Palindrome" : "Not Palindrome");
}