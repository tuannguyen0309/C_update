#include "NaturalScore.cpp"
#include "SocialScore.cpp"

int main()
{
    Score *s[6];

    s[0] = new NaturalScore(5, 5, 5, 5, 5, 5);
    s[1] = new SocialScore(4, 4, 4, 4, 4, 4);
    s[2] = new NaturalScore(6, 6, 6, 6, 6, 6);
    s[3] = new SocialScore(7, 7, 7, 7, 7, 7);
    s[4] = new NaturalScore(8, 8, 8, 8, 8, 8);
    s[5] = new SocialScore(9, 9, 9, 9, 9, 9);

    for (int i = 0; i < 6; i++) // lớp Natural không có pointC(), pointD() nên trả về 0, lớp kia cũng tương tự
    {
        cout << "Point A: " << s[i]->pointA() << endl;
        cout << "Point B:" << s[i]->pointB() << endl;
        cout << "Point C:" << s[i]->pointC() << endl;
        cout << "Point D:" << s[i]->pointD() << endl;
        cout << "______________________________" << endl;
    }

    for (int i = 0; i < 6; i++) // đã khai báo hàm Point() ở lớp Score nên có thể dùng up-casting để gọi hàm Point() ở 2 lớp
    {
        cout << "Point: " << s[i]->Point() << endl;
    }

    cout << "__________________________________" << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "avgPoint: " << s[i]->avgPoint() << endl;
    }

    cout << "__________________________________" << endl;

    vector<Score *> vt;

    for (int i = 0; i < 6; i++)
    {
        vt.push_back(s[i]);
    }

    for (int i = 0; i < vt.size(); i++)
    {
        if (vt[i]->isPass() == 1)
        {
            cout << "pass" << endl;
        }
        else
            cout << "fail" << endl;
    }

    cout << "__________________________________" << endl;

    cout << "Max Point A: " << Score::getMaxPointA(vt) << endl;
    cout << "Max Point B: " << Score::getMaxPointB(vt) << endl;
    cout << "Max Point C: " << Score::getMaxPointC(vt) << endl;
    cout << "Max Point D: " << Score::getMaxPointD(vt) << endl;

    cout << endl;
    system("pause");
}