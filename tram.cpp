#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int a[n],b[n];

for(int i=0; i<n; i++){
    cin >> a[i]>>b[i];

}
int total=b[0],curr=b[0];
for(int i=1;i<n-1;i++){
    curr=curr-a[i]+b[i];
    total=max(curr,total);
}
cout<<total<<endl;
    return 0;
}