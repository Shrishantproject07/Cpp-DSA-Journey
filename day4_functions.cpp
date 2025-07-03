#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Max of 3, 7, 5: " << max(3, 7, 5) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Is 7 Prime? " << (isPrime(7) ? "Yes" : "No") << endl;
    return 0;
}
