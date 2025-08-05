#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> multiply(vector<vector<long long>> A, vector<vector<long long>> B) {
    vector<vector<long long>> result(2, vector<long long>(2));
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            result[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
    return result;
}
vector<vector<long long>> power(vector<vector<long long>> M, int n) {
    if (n == 1) return M;

    if (n % 2 == 0) {
        vector<vector<long long>> half = power(M, n / 2);
        return multiply(half, half);
    } else {
        return multiply(M, power(M, n - 1));
    }
}
long long fib(int n) {
    if (n == 0) return 0;
    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = power(base, n - 1);
    return result[0][0];  // F(n)
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;

    return 0;
}
