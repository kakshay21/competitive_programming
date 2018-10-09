/* Chef and Pizza Problem Code: PCJ18G */
#include<iostream>
#include<vector>
using namespace std;
int main(){
 int T;
 long long N;
 cin>>T;
 vector<long long> res;
 vector<long long> ques;
 while(T--){
  cin>>N;
  ques.push_back(N);
 }
 int sum = 0;
 for(int i=1;i<N;i++){
  for(int j = 1;j<N;j++){
   if(i*j<N){
    res.push_back(i*j);
   }
  }
 }
 for(int i=0;i<res.size();i++){
  cout<<res[i]<<endl;
 }
 return 0;
}
