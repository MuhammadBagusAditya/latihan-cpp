#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 3;
    bool hasil;

    cout << "x = " << x << ", y : " << y << endl;
    cout << "----------------" << endl;

    hasil = (x > y) && (y < x);
    cout << "x > y and y < x : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x > y) && (y == 3);
    cout << "x > y and y == 3 : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x > y) && (y != 3);
    cout << "x > y and y != 3 : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x < y) && (y < x);
    cout << "x < y and y < x : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x < y) || (y < x);
    cout << "x < y or y < x : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x > y) || (y < x);
    cout << "x > y or y < x : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = (x < y) || (y != 3);
    cout << "x < y or y != 3 : " << hasil << endl;

    return 0;

}
