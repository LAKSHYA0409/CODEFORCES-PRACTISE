#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string ans="";
    cin >> s;
    int l=0,u=0;
int len = s.length();
    for(int i=0;i<len;i++){
        if(isupper(s[i]))
        {
            u++;
        }
        else 
        l++;
    }
    if(l>=u)
 transform(s.begin(), s.end(), s.begin(), ::tolower);
else
 transform(s.begin(), s.end(), s.begin(), ::toupper);
cout<<s<<endl;
    
    
    return 0;
}