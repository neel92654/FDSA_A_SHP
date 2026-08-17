#include <iostream>
using namespace std;

int main() {
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

    cout << "Rearranged Buckets: ";

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    cout << endl;

    return 0;
}