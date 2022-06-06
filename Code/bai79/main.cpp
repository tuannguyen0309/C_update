#include "Group.cpp"

int main()
{
    vector<People> p1;
    p1.push_back(People("Ngoc", "engineer", "1", 11));

    vector<People> p2;
    p2.push_back(People("Thao", " ", "2", 12)); // Thảo giàu từ bé nên không cần việc làm

    vector<People> p3;
    p3.push_back(People("Mai", "engineer", "3", 13));

    vector<Family> fa; // surname = last name = họ, VD: họ Nguyễn
    fa.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p1));
    fa.push_back(Family("Le", "rich", "Tran Hung Dao Street", p2));
    fa.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p3));

    vector<Family> poor = Family::getPoorHousehold(fa); // 3 hộ gia đình trong đó có 2 hộ nghèo

    for (int i = 0; i < poor.size(); i++) // nên vòng lặp for in ra 2 hộ nghèo này
    {
        poor[i].display();
    }

    vector<Family> familysurname = Family::findFamilySurname(fa, "Le");

    for (int i = 0; i < familysurname.size(); i++)
    {
        familysurname[i].display();
    }

    // giờ giải quyết 2 hàm của lớp Group nào
    vector<Family> f;
    // dùng lại giá trị của vector cũ cho dễ
    f.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p1));
    f.push_back(Family("Le", "rich", "Tran Hung Dao Street", p2));
    f.push_back(Family("Nguyen", "poor", "Dien Bien Phu Street", p3));

    Group v("phuong 1", f);

    cout << "Avg AgE Group: " << Group::avgAgeGroup(v) << endl
         << endl;

    Group g("phuong 1", f);
    vector<People> run = Group::getPeopleHaveNoJob(g);
    for (int i = 0; i < run.size(); i++)
    {
        cout << "Name: " << run[i].Name() << endl; // in ra Thảo
    }

    cout << endl;
    system("pause");
}
