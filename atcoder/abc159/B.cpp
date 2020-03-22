#include<bits/stdc++.h>
#define ll      long long
#define pii     pair<int, int>
#define f       first
#define s       second

using namespace std;
int main()
{
    string t, s, rev, r2;
    cin>>s;
    int n = s.size();

    t = s.substr(0, (n-1)/2);
//    cout<<t<<endl;
    rev = t;
    reverse(rev.begin(), rev.end());

    string t2 = s.substr((n+3)/2 - 1, n - ((n+3)/2) + 1);
//        cout<<t2<<endl;

    string rev2 = t2;
    reverse(rev2.begin(), rev2.end());

    r2 = s;
    reverse(r2.begin(), r2.end());

//    cout<<t.size()<<" "<<rev.size()<<endl;
//    cout<<t2.size()<<" "<<rev2.size()<<endl;
    if(t == rev && t2 == rev2 && s == r2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}


