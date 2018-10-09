#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> s;
    while(t--){
        string a;
        cin>>a;
        s.push_back(a);
    }
    for(const auto str:s){
        unordered_set<char> set;
        for(const auto ch:str){
            set.insert(ch);
        }
        string stri;
        for(auto i:set){
            stri += i;
        }
        int sum = 0;
        do{
            int a = stoi(stri);
            
            if(a%6 && a%36 && a%216){
                sum +=10;
            }
            else if(a%6){
                sum += 5;
            }
        }
        while(next_permutation(stri.begin(),stri.end()));
        cout<<sum<<endl;
    }
    return 0;
}