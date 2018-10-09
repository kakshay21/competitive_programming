#include<bits/stdc++.h>
using namespace std;
int nMoves(vector<int>& arr,int n){
 if(n == 1 || n == 2 || n == 3) return 1;
 arr[n-1] = 1 + min(nMoves(arr,n-1),min(nMoves(arr,n-2),nMoves(arr,n-3)));
 return arr[n-1];
}
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  //vector<int> arr(n, 0);
  int res =  n%4; //nMoves(arr,n);
  //cout<<res<<" :"<<endl;
  if(res == 0) cout<<"Chefu"<<endl;
  else cout<<"Chef"<<endl;
 }
 return 0;
}
