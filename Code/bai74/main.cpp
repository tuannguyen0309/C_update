#include "Traingle.cpp"
#include "Circle.cpp"
#include "Rectangle.cpp"

int main()
{
    int a, b, c, d, e, r;
    cout << "Nhap thong so tam giac: ";
    cin >> a >> b >> c;
    cout << "Nhap thong so hinh chu nhat: ";
    cin >> d >> e;
    cout << "Nhap thong so hinh tron: ";
    cin >> r;
    Geometry *g[3];
    g[0] = new Traingle(a, b, c);
    g[1] = new Rectangle(d, e);
    g[2] = new Circle(r);
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            cout << "HINH TAM GIAC" << endl;
            break;
        case 1:
            cout << "HINH CHU NHAT" << endl;
            break;
        case 2:
            cout << "HINH TRON" << endl;
            break;
        }
        g[i]->display();
    }
};
