#include <iostream>
#include <vector>
#include <string>
using namespace std;

const long long MOD = 1000000007; // You can change this as needed

// Multiply two 2x2 matrices under modulo
vector<vector<long long>> multiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    vector<vector<long long>> result(2, vector<long long>(2));
    result[0][0] = (A[0][0]*B[0][0] % MOD + A[0][1]*B[1][0] % MOD) % MOD;
    result[0][1] = (A[0][0]*B[0][1] % MOD + A[0][1]*B[1][1] % MOD) % MOD;
    result[1][0] = (A[1][0]*B[0][0] % MOD + A[1][1]*B[1][0] % MOD) % MOD;
    result[1][1] = (A[1][0]*B[0][1] % MOD + A[1][1]*B[1][1] % MOD) % MOD;
    return result;
}

// Check if the string number is odd
bool isOdd(const string& n) {
    return (n.back() - '0') % 2 != 0;
}

// Divide a string number by 2
string divideBy2(string n) {
    string result;
    int carry = 0;
    for (char c : n) {
        int current = carry * 10 + (c - '0');
        result.push_back((current / 2) + '0');
        carry = current % 2;
    }
    // Remove leading zeros
    int i = 0;
    while (i < result.size() && result[i] == '0') i++;
    return (i == result.size()) ? "0" : result.substr(i);
}

// Matrix exponentiation where exponent is a big number string
vector<vector<long long>> matrixPower(vector<vector<long long>> base, string exponent) {
    vector<vector<long long>> result = {{1, 0}, {0, 1}}; // Identity matrix

    while (exponent != "0") {
        if (isOdd(exponent)) {
            result = multiply(result, base);
        }
        base = multiply(base, base);
        exponent = divideBy2(exponent);
    }
    return result;
}

// Compute F(n) mod MOD where n is a large string
long long fibonacci(string n) {
    if (n == "0") return 0;
    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    // Since we compute F(n), we raise base matrix to (n-1)
    // So first subtract 1 from n
    int i = n.size() - 1;
    while (i >= 0) {
        if (n[i] > '0') {
            n[i]--;
            break;
        } else {
            n[i] = '9';
            i--;
        }
    }
    if (n[0] == '0') {
        n = n.substr(1);  // remove leading zero if present
    }

    vector<vector<long long>> res = matrixPower(base, n);
    return res[0][0];
}

int main() {
    string n;
    cout << "Enter a very large number n (up to 100000 digits): ";
    cin >> n;

    long long result = fibonacci(n);
    cout << "F(n) mod 10^9 = " << result << endl;

    return 0;
}
