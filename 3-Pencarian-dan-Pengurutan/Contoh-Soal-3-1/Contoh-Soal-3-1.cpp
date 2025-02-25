#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N; // Jumlah sepatu
	cin >> N;
	vector<int> ukuranSepatu(N);
	for (int i = 0; i < N; ++i) {
		cin >> ukuranSepatu[i];
	}
	int ukuranKaki;
	cin >> ukuranKaki;

	for (int i = 0; i < N; ++i) {
		if (ukuranSepatu[i] == ukuranKaki) {
			cout << "Terdapat sepatu dengan ukuran " << ukuranKaki << endl;
			break;
		}
	}

	return 0;
}