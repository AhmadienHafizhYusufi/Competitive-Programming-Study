#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

bool isPrimeSqrt(int n) {
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

vector<int> simplePrimeGeneration(int n) {
    vector<int> primeList;

    for (int i = 2; i <= n; i++) {
        if (isPrimeSqrt(i)) {
            primeList.push_back(i);
        }
    }
    return primeList;
}

void printPrimes(const vector<int>& primes) {
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}

void testSimplePrimeGeneration() {
    // Test case 1: n = 10
    vector<int> primes = simplePrimeGeneration(10);
    vector<int> expected = { 2, 3, 5, 7 };
    assert(primes == expected);

    // Test case 2: n = 20
    primes = simplePrimeGeneration(20);
    expected = { 2, 3, 5, 7, 11, 13, 17, 19 };
    assert(primes == expected);

    // Test case 3: n = 1 (no primes)
    primes = simplePrimeGeneration(1);
    expected = {};
    assert(primes == expected);

    // Test case 4: n = 2 (only one prime)
    primes = simplePrimeGeneration(2);
    expected = { 2 };
    assert(primes == expected);

    cout << "All test cases passed!" << endl;
}

int main() {
    // Run test cases
    testSimplePrimeGeneration();

    // Generate and print primes up to 50
    vector<int> primes = simplePrimeGeneration(50);
    printPrimes(primes);

    return 0;
}
