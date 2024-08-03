#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    // vector<int> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
        // v1.push_back(t);
    }

int mini=abs(v[0]-v[n-1]);
int index1=0;
int index2=n-1;
for(int i=0;i<n-1;i++)
{ if(abs(v[i]-v[i+1])<mini)
{
    mini=abs(v[i]-v[i+1]);
    index1=i;
    index2=i+1;
}

}
cout<<index1+1<<" "<<index2+1<<endl;


    return 0;
}