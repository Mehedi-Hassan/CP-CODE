#include<bits/stdc++.h>
using namespace std;

string next(string ns)
{
    int l=ns.size();
    while(l)
    {
        if(ns[l-1]=='z')
        {
            l--;
        }
        else
        {
            ns[l-1]++;
            return ns;
        }
    }

    string s;
    for(int i=0; i<ns.size() + 1; i++)
    {
        s+='a';
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    string a[n+9],ns="a";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    while(1)
    {
        for(int i=0; i<26; i++)
        {
            int cnt=0;
            for(int i=0; i<n; i++)
            {
                if(a[i].find(ns)==string::npos)
                {
                    cnt++;
                }
            }

            if(cnt==n)
            {
                cout<<ns;
                return 0;
            }
            ns[0]++;
        }
        ns="a";
        for(int i=0; i<26; i++)
        {
            string ns2="a",nw;
            for(int j=0; j<26; j++)
            {
                nw=ns+ns2;

                int cnt=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i].find(nw)==string::npos)
                    {
                        cnt++;
                    }
                }

                if(cnt==n)
                {
                    cout<<nw;
                    return 0;
                }
                ns2[0]++;
            }
            ns[0]++;
        }


    }
}
