#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void swap(int&, int&);

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nShuffling...";
    srand(time(NULL));
    for(int i = 1; i < n; i++) {
        swap(arr[i], arr[rand() % i]);
    }

    cout << "\n\nShuffled array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

void swap(int& a, int& b) {
    int c = b;
    b = a;
    a = c;
}