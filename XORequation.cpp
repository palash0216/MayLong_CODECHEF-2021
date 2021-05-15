/*
Xor Equality Problem Code: XOREQUAL

For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.

Since the number of valid x can be large, output it modulo 109+7.

Input
The first line contains an integer T, the number of test cases. Then the test cases follow.
The only line of each test case contains a single integer N.
Output
For each test case, output in a single line the answer to the problem modulo 109+7.

Constraints
1≤T≤105
1≤N≤105
Subtasks
Subtask #1 (100 points): Original Constraints

Sample Input
2
1
2
Sample Output
1
2*/

#include <iostream>
#include <math.h>
using namespace std;
int power(long long x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    int t, n, mod, ans;
    cin >> t;
    mod = 1000000007;
    while (t--)
    {
        cin >> n;
        ans = power(2, n - 1, mod);//Modular Exponentiation
        cout << ans << endl;
    }
    return 0;
}