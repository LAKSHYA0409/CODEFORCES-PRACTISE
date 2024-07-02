#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int lo = 0, ro = 0;
    int t = 0;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        if (l[i] == 0)
        {
            lo++;
        }

        if (r[i] == 0)
        {
            ro++;
        }
    }

    if (ro <= (n - ro))
    {
        t += ro;
    }
    else
    {
        t += (n - ro);
    }

    if (lo <= (n - lo))
    {
        t += lo;
    }
    else
    {
        t += (n - lo);
    }

    cout << t << endl;

    return 0;
}