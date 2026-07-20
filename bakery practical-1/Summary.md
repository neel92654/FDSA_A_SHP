# Problems Faced While Solving Practical-1

## Issues Faced While Solving Problem - 1:

When the number of hours became greater than the number of bakery items, it used to replace items which didn't even exist. To solve that problem, I updated the loop condition:

```cpp
for (int i = 0; i < h && (i + h) < n; i++) {
    int t = arr[i];
    arr[i] = arr[i + h];
    arr[i + h] = t;
}
```

Using `i < h && (i + h) < n` successfully resolved the out-of-bounds issue.

---

## Issues Faced While Solving Problem - 2:

The initial loop I used was correctly printing the BookIDs whose occurrence was more than once. However, the problem was that it printed them as many times as they occurred. I modified the loop to track duplicates

```cpp
for (int i = 0; i < n; i++) {
    if (count[i] > 1) {
        int alreadyPrinted = 0;
        for (int j = 0; j < i; j++) {
            if (bookid[i] == bookid[j]) {
                alreadyPrinted = 1;
                break;
            }
        }
        
        if (!alreadyPrinted) {
            cout << "Book ID: " << bookid[i] << endl;
        }
    }
}
```

The loop now only proceeds if the count of the BookID is greater than 1. I used an integer flag `alreadyPrinted` initialized to `0` (default) and flipped it to `1` if the ID was already processed to prevent duplicate print statements.

---

## Issues Faced While Solving Problem - 3:

There were no major issues or problems here. I just took a bit of time figuring out how to get the starting index of the longest word, which I eventually solved like this

```cpp
int indx;
for (int i = 0; i < l.length(); i++) {
    if (l[i] != ' ') {
        count1++;
    }
    else {
        if (count1 > count){
            count = count1;
            indx = i - count;
        }
        count1 = 0;
    }
}
if (count1 > count){
    count = count1;
    indx = l.length() - count;
}
```
