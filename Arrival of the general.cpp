#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
    
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++) {
        
        cin>>a[i];
    }
    
    int maxi = 0;
    int mini = 0;
    
    for(int i = 1; i < n; i++) {
        
        if(a[i] > a[maxi])
            maxi = i;
            
        if(a[i] <= a[mini])
            mini = i;
    }
    
    int minTime = 0;
    
    if(maxi < mini) {
        
        minTime = (maxi-1) + (n - mini) ;
    }
    
    else if(maxi > mini) {
        
        minTime = (maxi-1) + (n - mini) - 1;
    }
    
    cout<<minTime;
    
    return 0;
}