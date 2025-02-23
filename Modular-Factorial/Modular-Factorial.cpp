// Modular-Factorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int modularFactorial(int n, int k) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % k;
        cout << "When i: " << i << " result: " << result << endl;
    }
	return result;
}

int main()
{
	// User test case
    /*int n, k;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter k: ";
	cin >> k;
	cout << "Modular Factorial of " << n << " and " << k << " is: " << modularFactorial(n, k) << endl;*/
	
    // Test case 1
    int n1 = 5, k1 = 3;
    cout << "Test case 1 - n: " << n1 << ", k: " << k1 << endl;
    cout << "Expected: 2" << endl;
    cout << "Result: " << modularFactorial(n1, k1) << endl;
    cout << "-----------------------------" << endl;

    // Test case 2
    int n2 = 10, k2 = 7;
    cout << "Test case 2 - n: " << n2 << ", k: " << k2 << endl;
    cout << "Expected: 0" << endl;
    cout << "Result: " << modularFactorial(n2, k2) << endl;
    cout << "-----------------------------" << endl;

    // Test case 3
    int n3 = 6, k3 = 11;
    cout << "Test case 3 - n: " << n3 << ", k: " << k3 << endl;
    cout << "Expected: 10" << endl;
    cout << "Result: " << modularFactorial(n3, k3) << endl;
    cout << "-----------------------------" << endl;

    // Test case 4
    int n4 = 4, k4 = 5;
    cout << "Test case 4 - n: " << n4 << ", k: " << k4 << endl;
    cout << "Expected: 4" << endl;
    cout << "Result: " << modularFactorial(n4, k4) << endl;
    cout << "-----------------------------" << endl;

    // Test case 5
    int n5 = 7, k5 = 13;
    cout << "Test case 5 - n: " << n5 << ", k: " << k5 << endl;
    cout << "Expected: 5" << endl;
    cout << "Result: " << modularFactorial(n5, k5) << endl;
    cout << "-----------------------------" << endl;

    return 0;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
