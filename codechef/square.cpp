#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  long long n;
  cin>>n;
  long long sum = 0;
  for(int i=0;i<n;i++){
   long long r = n - i;
   sum += (long long)r*r;
  }
  cout<<sum<<endl;
 }
 return 0;
}
