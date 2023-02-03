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
    ll a,c1=0;
    cin>>a;
    string s;
    cin>>s;
    int st=0;
    int e=a-1;
    while(st<e){
        if(s[st]!=s[e]){
            c1+=2;
        }
        if(s[st]==s[e]){
            break;
        }
        st++;
        e--;
    }
        cout<<a-c1<<"\n";
    
    
}
 
 
return 0;
}