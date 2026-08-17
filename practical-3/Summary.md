# Problems Faced While Solving Practical-3

## Issues Faced While Solving Problem - 1:

There were not much of issues but the main thing was to understand how the three different sorting algorithms work in there own way of sorting elements: 

```cpp
//Bubble Sort
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

//Selection Sort
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

//Insertion Sort
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
```

---

## Issues Faced While Solving Problem - 2:

There were no issues while solving this problem just how can the count be made simpler for 0, 1 and 2 code buckets with the help counts list: 
```cpp
int b[] = {1, 0, 2, 1, 0, 1, 0};
    int n = sizeof(b) / sizeof(b[0]);

    int count[3] = {0};
    for (int i = 0; i < n; i++) {
        count[b[i]]++;
    }

    int index = 0;

    while (count[0] > 0) {
        b[index++] = 0;
        count[0]--;
    }

    while (count[1] > 0) {
        b[index++] = 1;
        count[1]--;
    }

    while (count[2] > 0) {
        b[index++] = 2;
        count[2]--;
    }
```
