#include <bits/stdc++.h>
using namespace std;
int main()
{
int s1,s2,s3,s4;
cin >> s1 >> s2 >> s3 >> s4;
int  a[4];int c=0;
a[0]=s1;
a[1]=s2;
a[2]=s3;
a[3]=s4;
sort(a,a+4);
for(int i=0;i<3;i++)
{
    if(a[i]==a[i+1])
    c++;
}
cout<<c<<endl;

    return 0;
}