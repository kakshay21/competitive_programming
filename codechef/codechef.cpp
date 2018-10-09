#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long x,y,n,m;
    bool flag = false;
    while(t--){
        cin>>x>>y>>n>>m;
        for(long long i=1;i<=n;i++){
            int a = (i*x)%y;
            long long b = (i*x)/y;
            if(a == 0 && b <= m){
                flag = true;
                break;
            } 
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
