#include<bits/stdc++.h>
#define ff first
#define ss second
#define mp make_pair
#define ll long long
#define max3(a,b,c) max(a, max(b,c))
#define max4(a,b,c,d) max(a, max(b, max(c,d)))
#define pb push_back
#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define pi(x) printf("%d",x)
#define sp() putchar(' ')
#define nl() putchar('\n')
#define fck std::ios::sync_with_stdio(false);
#define mx5 100010
#define mx6 1000010
#define MOD 1000000007
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;

ll lcm(ll a,ll b) {
    return ((a*b)/__gcd(a,b));
}

int main() {
   ll t,tmp,ans,n;
   slli(t);

   while(t--) {
        slli(n);
        ll a[n];
        for(int i=0;i<n;i++) {
            slli(a[i]);
        }
        ans=a[0];
        for(int i=0;i<n;i++) {
            ans=lcm(ans,a[i]);
        }
        printf("%lld\n",ans);
   }

   return 0;
}
