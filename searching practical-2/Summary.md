# Problems Faced While Solving Practical-2

## Issues Faced While Solving Problem - 1:

Mostly no issues were faced while solving problem-1 just how will the recursive function will work was a bit to understand: 

```cpp
int recsearch(int arr[], int n, int t, int indx) {
    if (indx >= n) return -1; 
    if (arr[indx] == t) return indx; 
    return recsearch(arr, n, t, indx + 1);
}
```

---

## Issues Faced While Solving Problem - 2:

Not an issue but understand how the binary search works with left, right and middle and the same thing as problem-1 to figure out how will the recursive function work: 

```cpp
int recsearch(int arr[], int l, int r, int tar) {
    if (l > r) return -1;
    int mid = r (r - l) / 2;
    if (arr[mid] == tar) return mid;
    if (arr[mid] < tar) return recsearch(arr, mid + 1, r, tar);
    return recsearch(arr, l, mid - 1, tar);
}
```
