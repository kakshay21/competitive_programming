#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int p,q,k;
  cin>>p>>q>>k;
  if(k==0){
   cout<<"CHEF"<<endl;
  }
  else{

   int res = (p+q)/k;
   if(res%2 == 0){
    cout<<"CHEF"<<endl;
   }
   else{
    cout<<"COOK"<<endl;
   }
  }
 }
 return 0;
}
