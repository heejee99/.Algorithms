#include <iostream>

using namespace std;

int func2(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        for (int k = i + 1; k < N; k++) {
            if (arr[i] + arr[k] == 100) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    int m;

    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << func2(arr, n) << endl;
}