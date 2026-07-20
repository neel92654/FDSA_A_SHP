#include <iostream>
using namespace std;

int main(){
    int n, h;
    cout << "Enter the no. of bakery items: ";
    cin >> n;

    cout << "Enter the no. of hours: ";
    cin >> h;
    int hr[h];
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    for (int i = 0; i < h; i++){
        hr[i] = arr[i];
        arr[i] = arr[i + h];
        arr[i + h] = hr[i];
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}