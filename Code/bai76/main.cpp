#include "Traingle.cpp"

int main()
{

    Point A(1, 2); // kết quả có thể ra khác nhau tùy vào cách viết hàm ở 2 lớp Point, Triangle
    Point B(4, 5);
    Point C = B - A;
    C.display();

    Traingle tra(Point(1, 2), Point(4, 5), Point(6, 7));

    cout << "Perimeter: " << tra.perimeter() << endl;
    cout << "Area: " << tra.area() << endl;

    tra.center().display(); // tri.center() trả về điểm có tọa độ trọng tâm, có hoành độ x, tung độ y
                            // Point G = tri.center(); tạo ra G và gán tri.center() cho G
                            // G.display()    sau đó gọi hàm display() , đây là cách viết khác

    Point(5, 5).display(); // in ra x = 5, y = 5

    cout << tra.isTraingle(); // nếu là false in ra 0, true in ra 1

    cout << endl;
    system("pause");
}
