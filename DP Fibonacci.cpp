#include <bits/stdc++.h>
using namespace std;

long long int fib(long long int dp[], long long int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        dp[n] = fib(dp, n - 1) + fib(dp, n - 2);
        return dp[n];
    }
}

long long int fibonacci(long long int n)
{
    long long int dp[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }
    return fib(dp, n);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}