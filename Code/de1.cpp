// BAI 1, DE 1
#include <bits/stdc++.h>
using namespace std;

void findAndPrintUncommonChars(string str1, string str2)
{
    map<char, int> count;
    for (char c : str1) {
        count[c]++;
    }
    for (char c : str2) {
        count[c]++;
    }
    for (auto it = count.begin(); it != count.end(); it++) {
        if (it->second == 1) {
            cout << it->first << " ";
        }
    }
    cout << "\n";
}

int main(int argc, char *argv[]){
     string s1 = "egeksfroeegks";
    string s2 = "eegksquiz";
    findAndPrintUncommonChars(s1, s2);
    s1 = "characters";
    s2 = "alphabets";
    findAndPrintUncommonChars(s1, s2);
    return 0;
}