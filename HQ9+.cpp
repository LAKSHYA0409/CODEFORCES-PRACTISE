#include <bits/stdc++.h>
using namespace std;
int main()
{ string s;
cin>>s;
int l=s.length();
int flag=0;
for(int i=0; i<l; i++){
    char t=s[i];
    // if(t=='+'){i++;}
    
if(t=='H'||t=='Q'||t=='9')
    {
        flag=1;
        cout<<"YES"<<endl;
        break;
    }
}

if(flag==0)
cout<<"NO"<<endl;
    return 0;
}