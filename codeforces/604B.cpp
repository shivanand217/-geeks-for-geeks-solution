#include<bits/stdc++.h>
#define mp make_pair
#define ll long long
#define pb push_back
#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define pi(x) printf("%d",x)
#define mx5 100005
#define mx6 1000006
#define mod 1000000007
#define rep(i,n) for(int i=0; i<n; i++)
#define fast std::ios::sync_with_stdio(false)
#define gc() getchar()
#define pc(x) putchar(x)
using namespace std;
int a[100005];
int main() {
    fast;
    int n,k;
    cin>>n>>k;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }
    if(k >= n){
        cout<<mx<<endl;
        return 0;
    }
    int f=2*k-n;
    int j=n-1;
    int cnt=0;

    while(cnt < f) {
        j--;
        cnt++;
    }
    int i=0;
    int s;
    while(i < j) {
        s = a[i]+a[j];
        mx=max(mx,s);
        i++ , j--;
    }
        cout<<mx<<endl;
    return 0;
}
