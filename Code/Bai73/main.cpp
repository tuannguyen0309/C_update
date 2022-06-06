#include "Car.cpp"

int main()
{
    Transport t("Ford", "Car", 2020, 400);
    t.display();
    cout << endl;

    Car r("Viet Nam", "VinFast", 2021, 300, 3, "diesel");
    r.display();
    cout << endl;

    vector<Car> v;
    v.push_back(Car("Viet Nam", "VinFast2", 2021, 300, 4, "diesel"));
    v.push_back(Car("Viet Nam", "VinFast3", 2021, 300, 5, "diesel"));
    v.push_back(Car("Viet Nam", "VinFast4", 2021, 300, 4, "diesel"));

    for (int i = 0; i < Car::getCarHaveMaxSpeedBasic(v).size(); i++)
    {
        Car::getCarHaveMaxSpeedBasic(v)[i].display();
        cout << endl;
    }

    for (int i = 0; i < Car::getCarHaveMaxSeat(v).size(); i++)
    {
        Car::getCarHaveMaxSeat(v)[i].display();
        cout << endl;
    }
}