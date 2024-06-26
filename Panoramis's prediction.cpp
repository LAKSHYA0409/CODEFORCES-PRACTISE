#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n<=1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
    int n;
    int m;
    int next;
    cin >> n >> m;

    while(n++){
        if(isprime(n)){
            next=n;
            break;
        }
    }
if(next==m){
    cout<<"YES"<<endl;

}
else cout<<"NO"<<endl;
    return 0;
}