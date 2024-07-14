#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;      
    int finger;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
  
        cin >> finger;
        sum += finger;
    }
    int m = n + 1;
    for (int i = 1; i <= 5; i++)

    {
        if ((sum + i) % m != 1)//remainder dega jo ki tumhari index k brabr hoga toh 
           {            //hum chahte hai ki remainer 1 na aaye jise dima bach jaye
               c++;
               
           }
    }

    cout << c << endl;

    return 0;
}