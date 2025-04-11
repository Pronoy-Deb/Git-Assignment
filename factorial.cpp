#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n; cin >> n;
    int64_t fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}