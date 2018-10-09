#include<iostream>
#include<vector>
using namespace std;
int main(){
 int t, qx, qy, sx, sy, dx, dy;
 cin>>t;
 cin>>qx>>qy;
 cin>>sx>>sy;
 cin>>dx>>dy;
 if((dx < qx && sx < qx) || (dx> qx && sx > qx)){
  if((dy < qy && sy < qy) || (dy > qy && sy > qy)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 } 
 else cout<<"NO"<<endl;
 return 0;
}
