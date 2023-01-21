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


ll factorial(ll a){
    ll md= 1e9+7;
    if(a==1 || a==0){
        return 1;
    }
    return ((a % md) * factorial((a-1)% md))%md;
}
int main()
{
fast;
ll md= 1e9+7;
ll t;
cin>>t;
while(t--){
    ll a;
    cin>>a;
    ll a1= (a-1) % md;
    ll b2= a % md;
    ll ans= ((a1*b2)) % md;
    ll fa= (factorial(a) * ans) % md;
    cout<<fa<<"\n";
}
 
 
return 0;
}