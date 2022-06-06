#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>

using namespace std;

void checkWin(string A, string B,int  &cupA , int &cupB){
    if (A == "B" && B == "K")
        cupA++;
    else if (A == "B" && B == "G")
        cupB++;
    else if (A == "B" && B == "B")
    {
        cupA++;
        cupB++;
    }
    else if (A == "G" && B == "K")
        cupB++;
    else if (A == "G" && B == "B")
        cupA++;
    else if (A == "G" && B == "G")
    {
        cupA++;
        cupB++;
    }
    else if (A == "K" && B == "K")
    {
        cupA++;
        cupB++;
    }
    else if (A == "K" && B == "B")
        cupB++;
    else if (A == "K" && B == "G")
        cupA++;

}
int getWinner(string s1, string s2, int  &cupA , int &cupB)
{
    string A, B;
    stringstream ss1(s1);
    stringstream ss2(s2);
    string token1, token2;
    // round 1
    getline(ss1, token1);
    A = token1;
    if (A != "B" || A != "G" || A != "K"){
        cout << "Error" << endl;
        return 0;
    }
    getline(ss2, token2);
    B = stoi(token2);
    if (B != "B" || B != "G" || B != "K"){
        cout << "Error" << endl;
        return 0;
    }
    checkWin(A, B, cupA, cupB);
    // round 2
    getline(ss1, token1);
    A = token1;
    if (A != "B" || A != "G" || A != "K"){
        cout << "Error" << endl;
        return 0;
    }
    getline(ss2, token2);
    B = token2;
    if (B != "B" || B != "G" || B != "K"){
        cout << "Error" << endl;
        return 0;
    }
    checkWin(A, B, cupA, cupB);
    // round 3
    getline(ss1, token1);
    A = token1;
    if (A != "B" || A != "G" || A != "K"){
        cout << "Error" << endl;
        return 0;
    }
    getline(ss2, token2);
    B = token2;
    if (B != "B" || B != "G" || B != "K"){
        cout << "Error" << endl;
        return 0;
    }
    checkWin(A, B, cupA, cupB);
    
    // round 4
    getline(ss1, token1);
    if (token1 != ""){
        cout << "Error" << endl;
        return 0;
    }
    getline(ss2, token2);
    if (token2 != ""){
        cout << "Error" << endl;
        return 0;
    }

    // trao cup
    if (cupA > cupB)
        return 1;
    else if (cupA < cupB)
        return 2;
    else
        return 0;
}

int main(){
    string BenA = "BKG";
    string BenB = "BKK";
    int cupA = 0, cupB = 0;
    int result = getWinner(BenA, BenB, cupA, cupB);
    if (result == 1)
        cout << "BenA win" << endl;
    else if (result == 2)
        cout << "BenB win" << endl;
    else
        cout << "Draw" << endl;
}
