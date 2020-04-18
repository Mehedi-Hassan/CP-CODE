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
int main()
{
    FASTIO;
    string s, t;
    cin>>s;

    int n = s.size(), ans = 100000, tempu= 0, d= 0;

    if(n>=2){
        string st;
        st += s[n-2];
        st += s[n-1];
        if(st == "00" || st == "25" || st == "50" || st == "75"){
            cout<<0;
            return 0;
        }
        if(st == "52" || st == "05" || st == "57"){
            cout<<1;
            return 0;
        }

        if(n == 2){
            cout<<-1;
            return 0;
        }
    }
    else{
        cout<<-1;
        return 0;
    }

    /////////////////////00
    t = s;
    if(t[n-1] =='0')
        d = 1;
    else{
        for(int i=n-2;i>=0;i--){
            if(t[i] == '0'){
                for(int j=i; j<n-1;j++){
                    swap(t[j], t[j+1]);
                    tempu++;
                }
                d = 1;
                break;
            }
        }
    }

    if(d == 1){
        if(t[n-2] == '0'){
            ans = min(ans, tempu);
        }
        else{
            for(int i=n-3;i>=0;i--){
                if(t[i] == '0'){
                    for(int j=i; j<n-2;j++){
                        swap(t[j], t[j+1]);
                        tempu++;
                    }
                    d = 2;
                    break;
                }
            }
            if(d == 2){
                ans = min(ans, tempu);
            }
        }

    }

    //////////////////////////50

    d = 0, tempu = 0;
    t = s;
    if(t[n-1] =='0')
        d = 1;
    else{
        for(int i=n-2;i>=0;i--){
            if(t[i] == '0'){
                for(int j=i; j<n-1;j++){
                    swap(t[j], t[j+1]);
                    tempu++;
                }
                d = 1;
                break;
            }
        }
    }

    if(d == 1){
        if(t[n-2] == '5'){
            ans = min(ans, tempu);
        }
        else{
            for(int i=n-3;i>=0;i--){
                if(t[i] == '5'){
                    for(int j=i; j<n-2;j++){
                        swap(t[j], t[j+1]);
                        tempu++;
                    }
                    int id = -1;
                    for(int j=0;j<n;j++){
                        if(t[j] != '0'){
                            id = j;
                            break;
                        }
                    }
                    if(id != -1){
                        while(id>0){
                            swap(t[id], t[id-1]);
                            id--;
                            tempu++;
                        }
                    }
                    d = 2;
                    break;
                }
            }
            if(d == 2 && t[n-2]=='5' && t[n-1]=='0'){
                ans = min(ans, tempu);
            }
        }

    }

    //////////////////////////25

    d = 0, tempu = 0;
    t = s;
    if(t[n-1] =='5')
        d = 1;
    else{
        for(int i=n-2;i>=0;i--){
            if(t[i] == '5'){
                for(int j=i; j<n-1;j++){
                    swap(t[j], t[j+1]);
                    tempu++;
                }
                int id = -1;
                for(int j=0;j<n;j++){
                    if(t[j] != '0'){
                        id = j;
                        break;
                    }
                }
                if(id != -1){
                    while(id>0){
                        swap(t[id], t[id-1]);
                        id--;
                        tempu++;
                    }
                }
                d = 1;
                break;
            }
        }
    }

    if(d == 1){
        if(t[n-2] == '2'){
            ans = min(ans, tempu);
        }
        else{
            for(int i=n-3;i>=0;i--){
                if(t[i] == '2'){
                    for(int j=i; j<n-2;j++){
                        swap(t[j], t[j+1]);
                        tempu++;
                    }
                    int id = -1;
                    for(int j=0;j<n;j++){
                        if(t[j] != '0'){
                            id = j;
                            break;
                        }
                    }
                    if(id != -1){
                        while(id>0){
                            swap(t[id], t[id-1]);
                            id--;
                            tempu++;
                        }
                    }
                    d = 2;
                    break;
                }
            }
            if(d == 2 && t[n-2]=='2' && t[n-1]=='5'){
                ans = min(ans, tempu);
            }
        }

    }

    //////////////////////////75

    d = 0, tempu = 0;
    t = s;
    if(t[n-1] =='5')
        d = 1;
    else{
        for(int i=n-2;i>=0;i--){
            if(t[i] == '5'){
                for(int j=i; j<n-1;j++){
                    swap(t[j], t[j+1]);
                    tempu++;
                }
                int id = -1;
                for(int j=0;j<n;j++){
                    if(t[j] != '0'){
                        id = j;
                        break;
                    }
                }
                if(id != -1){
                    while(id>0){
                        swap(t[id], t[id-1]);
                        id--;
                        tempu++;
                    }
                }
                d = 1;
                break;
            }
        }
    }

    if(d == 1){
        if(t[n-2] == '7'){
            ans = min(ans, tempu);
        }
        else{
            for(int i=n-3;i>=0;i--){
                if(t[i] == '7'){
                    for(int j=i; j<n-2;j++){
                        swap(t[j], t[j+1]);
                        tempu++;
                    }
                    int id = -1;
                    for(int j=0;j<n;j++){
                        if(t[j] != '0'){
                            id = j;
                            break;
                        }
                    }
                    if(id != -1){
                        while(id>0){
                            swap(t[id], t[id-1]);
                            id--;
                            tempu++;
                        }
                    }
                    d = 2;
                    break;
                }
            }
            if(d == 2){
                ans = min(ans, tempu);
            }
        }

    }

    if(ans == 100000)
        ans = -1;
    cout<<ans;

}


