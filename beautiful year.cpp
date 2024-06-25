#include <iostream>
using namespace std;

int main() {

    int year,a,b,c,d,ans;
    cin>>year>>a>>b>>c>>d>>ans;
    while(1) 
    {
        year++;
        ans=year;

        a=year%10;
        year=year/10;

        b=year%10;
        year=year/10;

        c=year%10;
        year=year/10;

        d=year%10;
        year=year/10;

        if(a!=b && a!=c && a!=d && b!=c &&c!=d && b!=d)
        {
            cout<<ans;
            break;
        }
        year=ans;
    }
   

    return 0;
}