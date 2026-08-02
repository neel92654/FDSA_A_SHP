#include <iostream>
using namespace std;

void sortpb(int buckets[], int n) {
  int low = 0;
  int mid = 0;
  int high = n - 1;
  int temp;

  while (mid <= high) {
    switch (buckets[mid]) {
    case 0:
      temp = buckets[low];
      buckets[low] = buckets[mid];
      buckets[mid] = temp;
      low++;
      mid++;
      break;
    case 1:
      mid++;
      break;
    case 2:
      temp = buckets[mid];
      buckets[mid] = buckets[high];
      buckets[high] = temp;
      high--;
      break;
    }
  }
}

int main() {
  int b[] = {1, 0, 2, 1, 0, 1, 0};
  int n = sizeof(b) / sizeof(b[0]);

  sortpb(b, n);

  cout << "Rearranged Buckets: ";
  for (int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;

  return 0;
}