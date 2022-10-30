#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n, vector<int> dp) {
    if (n <= 1) return dp[n];

    if(dp[n] != -1) return dp[n];

    int result = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    
    dp[n] = result;

    return dp[n];
}

int main() {
    int n = 10;
    cin >> n;
    vector<int> dp;

    dp.push_back(0);
    dp.push_back(1);

    for (int i = 2; i <= n; i++) dp.push_back(-1);
   
    cout << "Fibonacci of n is : ";
    cout << fibonacci(n, dp);

    return 0;
}