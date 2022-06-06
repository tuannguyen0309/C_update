#include "bits/stdc++.h"
using namespace std;
void findWinner(vector<string> &votes)
{
    unordered_map<string, int> mapObj;
    for (auto &str : votes)
    {
        mapObj[str]++;
    }
    int maxValueInMap = 0;
    string winner;
    for (auto &entry : mapObj)
    {
        string key = entry.first;
        int val = entry.second;
        if (val > maxValueInMap)
        {
            maxValueInMap = val;
            winner = key;
        }
        else if (val == maxValueInMap &&
                 winner > key)
            winner = key;
    }
    cout << winner << endl;
}

int main()
{
    vector<string> votes = {"john", "johnny", "jackie",
                            "johnny", "john", "jackie", 
                            "jamie", "jamie", "john",
                            "johnny", "jamie", "johnny",
                            "john"};
    findWinner(votes);
    vector<string> votee = {"andy", "blake", "clark"};
    findWinner(votee);

    return 0;
}
