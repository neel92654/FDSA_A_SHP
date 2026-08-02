#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  cout << "Bubble Sort: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionsort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;
  }
  cout << "Selection Sort: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionsort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  cout << "Insertion Sort: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  int marks[n];
  cout << "Enter the marks: ";
  for (int i = 0; i < n; i++) {
    cin >> marks[i];
  }
  cout << "Original Marks: ";
  for (int i = 0; i < n; i++) {
    cout << marks[i] << " ";
  }
  cout << endl;

  int arr1[n], arr2[n], arr3[n];
  for (int i = 0; i < n; i++) {
    arr1[i] = marks[i];
    arr2[i] = marks[i];
    arr3[i] = marks[i];
  }

  bubblesort(arr1, n);
  selectionsort(arr2, n);
  insertionsort(arr3, n);

  return 0;
}