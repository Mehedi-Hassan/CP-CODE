#include<bits/stdc++.h>
#define pii     pair<int, int>

using namespace std;
int main()
{
//    while(1){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        char x;
        vector< pii > ans;
        for(int i=0;i<(k-1)*2;i++){
            if(i%2 == 0)
                x = '(';
            else
                x = ')';
            if(s[i] == x)
                continue;
            int id;
            for(int j=i;j<n;j++){
                if(s[j] == x){
                    id = j;
                    break;
                }
            }
            swap(s[i], s[id]);
            ans.push_back(pii(i+1, id+1));
//            cout<<s<<endl;
        }
        for(int i= (k-1)*2; i< (k-1)*2+(n-2*(k-1))/2;i++){
            x = '(';
            if(s[i] == x)
                continue;
            int id;
            for(int j=i;j<n;j++){
                if(s[j] == x){
                    id = j;
                    break;
                }
            }
            swap(s[i], s[id]);
            ans.push_back(pii(i+1, id+1));
//            cout<<s<<endl;
        }

//        if(k < n/2)
//            cout<<ans.size()+1<<endl;
//        else
        cout<<ans.size()<<endl;
        int sz = ans.size();
        for(int i=0;i<sz;i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }//        if(k < n/2){
//            cout<<k*2+1<<" "<<n<<endl;
////            swap(s[k*2], s[n-1]);
////            cout<<s<<endl;
//        }



    }
}
//}
