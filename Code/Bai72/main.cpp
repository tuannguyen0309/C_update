#include "Student.cpp"

int main()
{
    Subject s("opp", 9.7, 2, 200);
    s.display();
    cout << endl;

    vector<Subject> v;
    v.push_back(Subject("opp2", 9.8, 3, 300));
    v.push_back(Subject("opp3", 9.9, 4, 400));

    Student t("1", "Nguyen Van Huu", v);
    t.display();
}