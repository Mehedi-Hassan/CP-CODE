#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<ll, ll>
#define f       first
#define s       second
#define sf(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define pf(a) printf("%d ", a)
#define pfl(a) printf("%lld\n", a)
#define Case(a) printf("Case %d: ", a)
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
const double eps = 1e-9;
const double pi = acos(-1);

bool Equal(double x, double y)
{
    return fabs(x-y)<eps; ///x==y
}

bool Greater(double x, double y)
{
    return x-eps>y; ///x>y
}

bool Lesser(double x, double y)
{
    return x+eps<y; ///x>y
}

struct point
{
    double x, y, ang;
};





using namespace std;
int cnt[200009];
int main()
{
    FASTIO;
    ll n, m;
    cin>>n>>m;

    ll a[n];
    queue<ll>id[m];
    list<pii>l;

    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]%m]++;
        if(cnt[a[i]%m] > n/m){
            l.push_back(pii(a[i]%m, i));
//            id[a[i]%m].push(i);
        }
    }
    l.sort();

    ll left, right;
    ll ans = 0;
    for(ll i=0;i<m;i++){
        while(cnt[i] < n/m){
            left = i - l.front().f;
            right = i - l.back().f;

            if(left < 0)
                left += m;
            if(right < 0)
                right += m;

            ll x;
            if(left <= right){
                x = l.front().f;
                cnt[x]--;
                cnt[i]++;

                a[l.front().s] += left;
                l.pop_front();
                ans += left;
            }
            else{
                x = l.back().f;
                cnt[x]--;
                cnt[i]++;

                a[l.back().s] += right;
                l.pop_back();
                ans += right;
            }
        }
    }

    for(ll i=0;i<m;i++){
        while(cnt[i] < n/m){
            left = i - l.front().f;
            right = i - l.back().f;

            if(left < 0)
                left += m;
            if(right < 0)
                right += m;

            ll x;
            if(left <= right){
                x = l.front().f;
                cnt[x]--;
                cnt[i]++;

                a[l.front().s] += left;
                l.pop_front();
                ans += left;
            }
            else{
                x = l.back().f;
                cnt[x]--;
                cnt[i]++;

                a[l.back().s] += right;
                l.pop_back();
                ans += right;
            }
        }
    }

    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}

/*100 25
6745 2075 7499 7517 1776 5164 2335 2745 4465 1457 7565 2232 2486 9025 8059 9646 8017 7662 9690 3352 2306 366 7422 1073 7169 8966 4506 8225 5614 8628 2908 7452 9625 9332 7097 353 1043 8118 5794 4486 626 971 6731 6618 887 6354 4814 7307 7681 6160 9351 2579 411 3436 5570 2812 2726 4433 3220 577 5891 3861 528 2183 127 5579 6979 4005 9953 5038 9937 4792 3003 9417 8796 1565 11 2596 2486 3494 4464 9568 5512 5565 9822 9820 4848 2889 9527 2249 9860 8236 256 8434 8038 6407 5570 5922 7435 2815

113
6745 2075 7499 7517 1776 5164 2335 2745 4465 1457 7565 2232 2486 9025 8059 9646 8017 7662 9690 3352 2306 366 7422 1073 7169 8966 4506 8225 5614 8628 2908 7452 9625 9332 7097 353 1043 8118 5794 4486 626 971 6731 6618 887 6354 4814 7307 7681 6160 9351 2579 411 3436 5570 2812 2726 4433 3220 577 5891 3884 528 2183 127 5579 6979 4005 9953 5038 9937 4792 3005 9417 8796 1565 34 2596 2488 3494 4464 9568 5516 5573 9822 9824 4848 2894 9530 2249 9860 8238 280 8434 8038 6408 5574 5922 7435 2823


88
6745 2075 7499 7517 1776 5164 2335 2745 4465 1457 7565 2232 2486 9025 8059 9646 8017 7662 9690 3352 2306 366 7422 1073 7169 8966 4506 8225 5614 8628 2908 7452 9625 9332 7097 353 1043 8118 5794 4486 626 971 6731 6618 887 6354 4814 7307 7681 6160 9351 2579 411 3436 5570 2812 2726 4433 3220 577 5891 3863 528 2183 127 5579 6979 4005 9953 5038 9937 4792 3005 9417 8796 1565 24 2596 2505 3494 4464 9568 5513 5566 9822 9823 4848 2899 9530 2249 9860 8259 259 8434 8038 6408 5573 5922 7435 2819

*/
