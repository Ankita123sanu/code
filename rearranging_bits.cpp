#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int len = log2(n) + 1;
    int c = 0;
    int i = 0;
    int t=n;
    //count set bit
    while (n != 0)
    {
        n = n & (n - 1);
        c++;
    }
    cout << c << endl;
    cout << len << endl;
    unsigned int mask = 0;
    cout << mask << endl;
    int j = 0;
    if (c == len)
    {
        cout << t << endl;
    }
    else
    {
        while (j <= c)
        {
            mask ^= (1 << j);
            j++;
            c--;
        }
         cout << mask << endl;
    }
    return 0;
}