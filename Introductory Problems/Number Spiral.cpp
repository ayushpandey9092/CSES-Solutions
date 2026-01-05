#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
// main issue that i faced is that i used pow function and it does not work for large numbers as it can work correct till 15-16 decimal digits
// because it works on double .
int T;
ll X, Y;

ll solve(ll x, ll y){
    ll l = max(x, y)-1;
    if(l&1){
        if(x < y)   return l*l + x;
        else        return l*l+2*l-y+2;
    } else {
        if(x < y)   return l*l+2*l-x+2;
        else        return l*l + y;
    }
}

int main(){
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        scanf("%lld %lld", &X, &Y);
        printf("%lld\n", solve(X, Y));
    }
}
