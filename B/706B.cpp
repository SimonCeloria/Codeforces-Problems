#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,i,j,dia_x,ans;
    cin>>n;
    int a[n],p;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    sort(a,a+n);
    while(m--)
    {
        cin>>dia_x;
        ans=upper_bound(a,a+n, dia_x)-a;
        cout<<ans<<endl;
    }
return 0;
}