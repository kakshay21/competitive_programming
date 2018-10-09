#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  string c;
  cin>>c;
  int sum = 0;
  for(int i=0;i<n;i++){
   if(c[i] == '1') sum++;
  }
  cout<<sum<<endl;
 }
 return 0;
}
