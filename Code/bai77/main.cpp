#include "CannedFood.cpp"
#include "NonCFood.cpp"

int main()
{
    vector<CannedFood> cf;

    cf.push_back(CannedFood("Fish", 500, 3));
    cf.push_back(CannedFood("Meat", 500, 2));
    cf.push_back(CannedFood("Egg", 500, 1));

    CannedFood::sortNumberBox(cf);

    vector<NonCFood> ncf;

    ncf.push_back(NonCFood("Fish", 500, 60));
    ncf.push_back(NonCFood("Meat", 500, 40));
    ncf.push_back(NonCFood("Egg", 500, 20));

    NonCFood::sortWeight(ncf);

    cout << endl;
    system("pause");
}