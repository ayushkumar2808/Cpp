#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    // recursive condition
    return fact(n - 1) + fact(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}