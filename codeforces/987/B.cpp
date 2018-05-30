#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double a,b;
				cin>>a>>b;
				if(log2(a)*b > log2(b)*a) cout<<">";
    else if(log2(a)*b < log2(b)*a) cout<<"<";
				else cout<<"=";
}