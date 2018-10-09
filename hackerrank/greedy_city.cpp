#include "stdc++.h"

using namespace std;

vector<string> split_string(string);

// Complete the maximumPeople function below.
long maximumPeople(vector<long> p, vector<long> x, vector<long> y, vector<long> r) {
    // Return the maximum number of people that will be in a sunny town after removing exactly one cloud.
    unordered_map<long, long> mp;
    for(long i=0;i<p.size();i++){
        mp[x[i]] = p[i];
    }
    long max = numeric_limits<long>::min();
    for(const auto i:x){
        if(i>=max){
            max = i;
        }
    }
    vector<long> cloud_loc(max, 0);
    for(long  i=0;i<y.size();i++){
        cloud_loc[y[i]]++;
        long l = 0;
        while(r[i]--){
            cloud_loc[y[i+l]]++;
            cloud_loc[y[i-l]]++;
            l++;
        }
    }
    long popul = 0;
    for(long i=0;i<cloud_loc.size();i++){
        auto cl = mp.find(i);
        if(cloud_loc[i] == 0 && cl != mp.end()){ 
            popul += cl->second;
        }
        else if(cl != mp.end() && cloud_loc[i] == 1){
            popul += cl->second;
        }
    }
    return popul;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string p_temp_temp;
    getline(cin, p_temp_temp);

    vector<string> p_temp = split_string(p_temp_temp);

    vector<long> p(n);

    for (int i = 0; i < n; i++) {
        long p_item = stol(p_temp[i]);

        p[i] = p_item;
    }

    string x_temp_temp;
    getline(cin, x_temp_temp);

    vector<string> x_temp = split_string(x_temp_temp);

    vector<long> x(n);

    for (int i = 0; i < n; i++) {
        long x_item = stol(x_temp[i]);

        x[i] = x_item;
    }

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string y_temp_temp;
    getline(cin, y_temp_temp);

    vector<string> y_temp = split_string(y_temp_temp);

    vector<long> y(m);

    for (int i = 0; i < m; i++) {
        long y_item = stol(y_temp[i]);

        y[i] = y_item;
    }

    string r_temp_temp;
    getline(cin, r_temp_temp);

    vector<string> r_temp = split_string(r_temp_temp);

    vector<long> r(m);

    for (int i = 0; i < m; i++) {
        long r_item = stol(r_temp[i]);

        r[i] = r_item;
    }

    long result = maximumPeople(p, x, y, r);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

