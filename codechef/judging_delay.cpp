#include<iostream>
#include<vector>
using namespace std;
int main(){
    int T, N;
    cin>>T>>N;
    int a, b, cnt = 0;
    while(T--){
        for(int i=0;i<N;i++){
            cin>>a>>b;
            if(b-a > 5) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}