#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,arr,i;
    deque<pair<int,int>>dq;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr;
        dq.push_back(make_pair(i,arr));
    }
    while(dq.size()>1){
        if(dq.front().second-m<=0){
            dq.pop_front();
        }
        else if(dq.front().second-m>0){
            dq.front().second -= m;
            rotate(dq.begin(),dq.begin()+1,dq.end());
        }
    }
    cout<<dq.front().first<<endl;
    
    return 0;
}