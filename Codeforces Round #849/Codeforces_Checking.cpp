#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define fon for(i=0;i<n;i++)
#define foj for(j=0;j<n;j++)
#define f(i, x, n) for (i = x; i < n; i++)
#define bf(i,z,n) for(ll i=z;i>=n;i--)
#define PI 3.141592653589793
#define maxa *max_element
#define mina *min_element
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define cina(a,n) for(ll i=0;i<n;i++){cin>>a[i];}
#define cin1 for(ll i=0;i<n;i++){cin>>a[i];}
#define couta(a,n) for(ll i=0;i<n;i++){cout<<a[i]<<' ';}
int main()
{
fast;
ll t;
cin>>t;
while(t--){
    char s;
    int flag=0;
    cin>>s;
    string c="codeforces";
    for (int i = 0; i < c.length(); i++)
    {
        if(s==c[i]){
            cout<<"YES\n";
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"NO\n";
}
 
 
return 0;
}