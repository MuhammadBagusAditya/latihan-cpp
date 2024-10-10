#include <iostream>

using namespace std;

int main()
{
    int x = 5, y = 3;
    bool hasil;

    cout << "x = " << x << ", y = " << y << endl;

    cout << "----------------" << endl;

    hasil = x > y;
    cout << "x > y : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = x < y;
    cout << "x < y : " << hasil << endl;

    cout << "----------------" << endl;

    hasil = x == y;
    cout << "x == y : " << hasil << endl;

    return 0;
}
