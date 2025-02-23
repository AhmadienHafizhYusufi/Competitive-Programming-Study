#include <iostream>

using namespace std;

bool isPrimeNaive(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // User test case
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Is " << n << " prime? " << isPrimeNaive(n) << endl;
    return 0;
}
