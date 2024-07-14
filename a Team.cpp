#include <bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
int count=0;
int a[n],b[n],c[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];

    if(a[i]+b[i]+c[i]>1)
    count++;
}
cout<<count<<endl;


    return 0;
}