#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(long long a){
 if(a == 1) return false;
 long long sq = sqrt(a);
 for(int i=2;i<=sq;i++){
  if(a%i == 0) return false;
 }
 return true;
}
int main(){
 int t;
 cin>>t;
 while(t--){
  long long  a, b;
  cin>>a>>b;
  if(a-b == 1 && is_prime(a+b)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
 return 0;
}
