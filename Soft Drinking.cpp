#include <bits/stdc++.h>
using namespace std;
int main()
{ int n,k,l,p,c,d,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int limereq=c*d;
int drinkreq=(k*l)/nl;
int saltreq=p/np;

int ans= min(limereq,min(drinkreq,saltreq))/n;

cout<<ans<<endl;
    return 0;
}