#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& data) {
	for (int i = 0; i < data.size() - 1; i++) {
		for (int j = 0; j < data.size() - i - 1; j++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
}

void selectionSort(vector<int>& data) {
    for (int i = 0; i < data.size(); i++) {
        int minIndex = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        int temp = data[i];
        data[i] = data[minIndex];
        data[minIndex] = temp;
    }
}

void insertionSort(vector<int>& data) {
    for (int i = 1; i < data.size(); i++) {
        int key = data[i];
        int j = i - 1;
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void countingSort(vector<int>& data) {
    if (data.empty()) return;

    int maxVal = *max_element(data.begin(), data.end());
    vector<int> ftable(maxVal + 1, 0);

    for (int i = 0; i < data.size(); i++) {
        ftable[data[i]]++;
    }

    int index = 0;
    for (int i = 0; i < ftable.size(); i++) {

        while (ftable[i] > 0) {
            data[index] = i;
            index++;
            ftable[i]--;
        }
    }
}

int main() {
    vector<int> data1 = { 64, 34, 25, 12, 22, 11, 90 };
    vector<int> data2 = data1; // Copy of the original data for selection sort
    vector<int> data3 = data1; // Copy of the original data for insertion sort
    vector<int> data4 = data1; // Copy of the original data for counting sort

    cout << "Unsorted array: ";
    for (int i = 0; i < data1.size(); i++) {
        cout << data1[i] << " ";
    }
    cout << endl;

    bubbleSort(data1);

    cout << "Array sorted with bubble sort: ";
    for (int i = 0; i < data1.size(); i++) {
        cout << data1[i] << " ";
    }
    cout << endl;

    selectionSort(data2);

    cout << "Array sorted with selection sort: ";
    for (int i = 0; i < data2.size(); i++) {
        cout << data2[i] << " ";
    }
    cout << endl;

    insertionSort(data3);

    cout << "Array sorted with insertion sort: ";
    for (int i = 0; i < data3.size(); i++) {
        cout << data3[i] << " ";
    }
    cout << endl;

    countingSort(data4);

    cout << "Array sorted with counting sort: ";
    for (int i = 0; i < data4.size(); i++) {
        cout << data4[i] << " ";
    }
    cout << endl;

    return 0;
}