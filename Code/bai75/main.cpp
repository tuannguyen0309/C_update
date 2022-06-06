#include "EmployeePT.cpp"
#include "EmployeeFT.cpp"

int main()
{
    Person *p[1];
    p[0] = new EmployeePT("Nam", 18, "HN", "0123", "Nu", 2, 100);
    p[1] = new EmployeeFT("Nam", 19, "HCM", "0123", "Nu", 25, 200);

    p[0]->display();
    cout << endl;
    p[1]->display();
    cout << endl;

    vector<Person *> s;
    s.push_back(new EmployeePT("Nam1", 20, "HN", "01234", "Nu", 3, 300));
    s.push_back(new EmployeeFT("Nam1", 21, "HCM", "01234", "Nu", 26, 400));

    for (int i = 0; i < Person::findPerson(s).size(); i++)
    {
        Person::findPerson(s)[i]->display();
        cout << endl;
    }

    vector<EmployeePT> e;
    e.push_back(EmployeePT("Nam2", 22, "HN", "012345", "Nu", 4, 500));
    e.push_back(EmployeePT("Nam2", 23, "HCM", "012345", "Nu", 5, 600));
    e.push_back(EmployeePT("Nam2", 24, "HN", "012345", "Nu", 5, 600));

    for (int i = 0; i < EmployeePT::getMaxSalary(e).size(); i++)
    {
        EmployeePT::getMaxSalary(e)[i].display();
        cout << endl;
    }

    vector<EmployeeFT> v;
    v.push_back(EmployeeFT("Nam3", 25, "HN", "0123456", "Nu", 27, 700));
    v.push_back(EmployeeFT("Nam3", 26, "HCM", "0123456", "Nu", 28, 800));
    v.push_back(EmployeeFT("Nam3", 27, "HN", "0123456", "Nu", 28, 800));

    for (int i = 0; i < EmployeeFT::getMaxSalary(v).size(); i++)
    {
        EmployeeFT::getMaxSalary(v)[i].display();
        cout << endl;
    }
}