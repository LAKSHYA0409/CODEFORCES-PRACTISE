#include <bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
string s1="";
string ans="";
int len =s.length();
if(len==1)
cout<<s[0]<<endl;
else{
    for(int i=0;i<len;i+=2)
    {
    s1+=s[i];
    }
 
    sort(s1.begin(),s1.end());
    int j=0;
    for(int i=0;i<s.length();i++)
    {
       if(i%2==0||i==0)
       ans+=s1[j++];
       else
       ans+='+';
    }
 
    cout<<ans<<endl;
}
 
    return 0;
}