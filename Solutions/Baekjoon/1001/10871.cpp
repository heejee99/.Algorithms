#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    int N, X, A;
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        cin >> A;
        if (A < X) {
            cout << A << ' ';
        }
    }
    return 0;
}