#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    bool day = s[s.size()-2] == 'A';
    string ans = "";
    int t = stoi(s.substr(0 , 2));
    if(t == 12){
        if(day) ans = "00";
        else ans = "12";
    }
    else if(!day){
        t += 12;
        t %= 24;
        
        if(t < 10) ans += "0";
        ans += to_string(t);
    }
    else ans += s.substr(0 , 2);
    
    for(int i = 2 ; i < s.size()-2 ; i++) ans += s[i];
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
