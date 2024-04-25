#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k) {
    if (k >= 26) {
        k = k % 26;
    }
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= char(int('z') - k)) {
            s[i] = char(int(s[i]) + k);
        }
        else if (s[i] > char(int('z') - k)&&s[i]<='z') {
            s[i] = char(s[i] - 26 + k);
        }
        else if (s[i] >= 'A' && s[i] <= char(int('Z') - k)) {
            s[i] = char(int(s[i]) + k);
        }
        else if (s[i] > char(int('Z') - k)&&s[i]<='Z') {
            s[i] = char(s[i] - 26 + k);
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
