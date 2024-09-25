#include <iostream>
#include <vector>
#include <string>
using namespace std;
const long long MOD = 1000000007;
long long modPow(long long base, long long exp, long long mod) 
{
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) 
        { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod; 
        exp /= 2;
    }
    return result;
}
string calculateParity(vector<string> s, int m) {
    long long sum = 0;
    for(auto& str:s) 
    {
        long long value = 1;
        for (char c : str) {
            long long asciiValue = (int)c; 
            value = (value * modPow(asciiValue, m, MOD)) % MOD;
        }
        sum = (sum + value) % MOD;
    }
    return (sum % 2 == 0) ? "EVEN" : "ODD";
}
int main() {                                       
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    cout << calculateParity(s, m) << endl;
    return 0;
}
