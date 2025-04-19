#include<bits/stdc++.h>
using namespace std;

int64_t factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int nthPrime(int n) {
    if (n < 1) return -1;
    int count = 0, num = 1;
    while (count < n) {
        num++;
        bool isPrime = true;
        for (int i = 2; i * 1ll * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
    }
    return num;
}

int main() {
    cout << "Enter a number: ";
    int n; cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << '\n';
    cout << "The " << n << "th prime number is " << nthPrime(n) << '\n';
    return 0;
}