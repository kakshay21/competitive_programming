#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int popul;
  cin>>popul;
  int q = (popul-1)/26;
  int r = (popul-1)%26;
  int p[] = {0,0,0};
  if(r<2){
   p[0] = 2*q;
   if(q==0) p[0] = 1;
  }
  else if(r<10){
   p[1] = 2*q;
   if(q==0) p[1] = 1;
  }
  else if(r<=25){
   p[2] = 2*q;
   if(q==0) p[2] = 1;
  }
 cout<<p[0]<<p[1]<<p[2]<<endl;
 }
 return 0;
}
