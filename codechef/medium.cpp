#include "stdc++.h"
using namespace std;
int main(){
    int t,n;
    cin>>t;
    map<int, int> mp;
    while(t--){
        int a,b;
        cin>>a>>b;
        mp[a] = b;
    }
    cin>>n;
    while(n--){
        int no;
        cin>>no;
        int cnt = 0;
        while(no--){
            int r;
            cin>>r;
            auto low = mp.lower_bound(r);
            auto high = mp.higher_bound(r);
            if(low.first <= r && high.first >= r){
                cnt++;
            }
        }
    }
    return 0;
}