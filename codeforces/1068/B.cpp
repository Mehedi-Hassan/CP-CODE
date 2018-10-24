#include<bits/stdc++.h>
using namespace std;

#define ll       long long
int divi(ll n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}


int main()
{
    ll b;
    cin>>b;

    cout<<divi(b);

}
