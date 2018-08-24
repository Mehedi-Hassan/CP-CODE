#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string ss,mn;
int cnt()
{
    int M = ss.size();
    int N = mn.size();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (mn[i+j] != ss[j])
                break;
        if (j == M)
        {
           res++;
           j = 0;
        }
    }
    return res;
}
int main()
{
    int n,k;
    cin>>n>>k;
    string s1,s2;
    cin>>ss;
    mn=ss;
    int l=mn.size(),i,idx=0;
    s2=ss;
    for(i=1;i<l;i++){
        s1=ss.substr(i,l-i);
        s2=ss.substr(l-i,i);
//        cout<<s1<<" "<<s2<<" "<<s1+s2<<endl;
        if(s1+s2==ss){
            break;
        }
    }
    if(i==l) s2=ss;
    while(k!=cnt()){
//            cout<<mn;
        mn+=s2;
    }
    cout<<mn;
//    cout<<mn;
//    while(k<cnt()){
//        l--;
//    }
//    for(int i=0;i<l;i++){
//        cout<<mn[i];
//    }
}
