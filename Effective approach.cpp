#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n;
    long long c1 = 0,  c2 = 0;
    cin >> n;
    unordered_map<long long , long long > mp;
 
    for (long long i = 1; i <= n; i++)
    { long  long v;
        cin >> v;
        mp[v] = i;
    }
 
    long long  m;
    cin >> m;
    while (m--)
    {
        long long  target;
        cin >> target;
        c1 += mp[target];
        c2 += +n + 1 -mp[target] ;
    }
 
    cout << c1 << " " << c2 << endl;
 
    return 0;
}