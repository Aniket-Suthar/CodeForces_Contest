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
    ll a,c1=0,c2=0;
    cin>>a;
    ll arr[a];
    vector<ll> v;
    int d;
    for (int i = 0; i < a;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a-1; i++)
    {
        if(arr[i]%2==0 && arr[i+1]%2==0){
           
            c1++;
        }
        else if(arr[i]%2!=0 && arr[i+1]%2!=0)
    {
        c1++;
    }
      }
      cout<<c1<<"\n";    }
    
}
 
 
