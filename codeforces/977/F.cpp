#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
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
//vector<int>id[200009];
map<int, vector<int> >id;

int main()
{
    FASTIO;
    int n;
    cin>>n;

    int a[n], cnt[n], pos[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        id[a[i]].push_back(i);
        cnt[i] = 1;
        pos[i] = -1;
    }
    int ans = 1, idx = 0;
    for(int i=1;i<n;i++){
        int x = upper_bound(id[a[i]-1].begin(), id[a[i]-1].end(), i) - id[a[i]-1].begin();
        x--;
        if(x >= id[a[i]-1].size())
            continue;

        x = id[a[i]-1][x];
        if(x > i)
            continue;
        cnt[i] = max(cnt[x]+1, cnt[i]);
        pos[i] = x;
        if(cnt[i] > ans){
            ans = cnt[i];
            idx = i;
        }
//        ans = max(ans, cnt[i]);
    }

//    for(int i=0;i<n;i++){
//        cout<<pos[i]<<" ";
//    }
    cout<<ans<<endl;
    stack<int>st;
    st.push(idx);

    while(pos[idx] != -1){
        idx = pos[idx];
        st.push(idx);
    }

    while(!st.empty()){
        cout<<st.top()+1<<" ";
        st.pop();
    }
}


