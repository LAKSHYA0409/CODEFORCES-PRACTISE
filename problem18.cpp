#include <bits/stdc++.h>
using namespace std;
int main()
{
int c=0;
    int n;
   cin>>n;
   int a[n];

   for(int i=0;i<n;i++)
{
    cin>>a[i];
}

int min=a[0];
int max=a[0];
int curr=a[0];
for(int i=1;i<n;i++){
if(a[i]>max){
c++;
max=a[i];
}
else if(a[i]<min){
    c++;
    min=a[i];
}}
cout<<c<<endl;
    return 0;
}