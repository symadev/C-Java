#include <iostream>
using namespace std;

int main() {
    int n, a[100], key;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> key;

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
}