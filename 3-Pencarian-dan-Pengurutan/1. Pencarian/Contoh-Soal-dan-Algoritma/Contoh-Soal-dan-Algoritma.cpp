#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sequentialSearch(vector<int> &data, int key) {
	for (int i = 0; i < data.size(); i++) {
		if (data[i] == key) {
			cout << "Data ditemukan pada index ke-" << i << endl;
			return;
		}
	}
	cout << "Data tidak ditemukan" << endl;
}

void binarySearch(vector<int>& data, int key) {
	int left = 0;
	int right = data.size() - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (data[mid] == key) {
			cout << "Data ditemukan pada index ke-" << mid << endl;
			return;
		}
		else if (data[mid] < key) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << "Data tidak ditemukan" << endl;
}

int main() {
	int N, X; // N = jumlah data, X = data yang dicari
	cin >> N >> X; // Input jumlah data dan data yang dicari
	vector<int> h(N); // Array untuk menyimpan data

	for (int i = 0; i < N; i++) {
		cin >> h[i]; // Input data ke-i
	}

	if (is_sorted(h.begin(), h.end())) { // Jika data sudah terurut
		binarySearch(h, X); // Gunakan binary search
	}
	else { // Jika data belum terurut
		sequentialSearch(h, X); // Gunakan sequential search
	}
}