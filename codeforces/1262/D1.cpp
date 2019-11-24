
#include<bits/stdc++.h>
#define pii     pair<int, int>

using namespace std;
bool cmp(pii a, pii b)
{
    if(a.first == b.first)
        return a.second < b.second;
    return a.first>b.first;
}

bool cmp2(pii a, pii b)
{
        return a.second < b.second;
}
int main()
{
//    while(1){
    int n;
    cin>>n;

    int a[n];
    vector< pii >v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        v.push_back(pii(a[i], i));
    }
    sort(v.begin(), v.end(), cmp);
//    for(int i=0;i<n;i++){
//        cout<<v[i].first<<" ";
//    }
    int m;
    cin>>m;
    while(m--){
        int k, pos;
        cin>>k>>pos;
        int sum = 0;
        sort(v.begin(), v.end(), cmp);
        sort(v.begin(), v.begin()+k, cmp2);
        cout<<v[pos-1].first<<endl;
    }
}
//}
