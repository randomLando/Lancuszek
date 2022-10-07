#include <iostream>

using namespace std;

int main()
{
    int tel, lasttel, dat, a, b, c, d, wynik;
    cin >> tel >> dat;
    lasttel = tel % 10;
    a = lasttel * 2;
    b = a + 5;
    c = b * 50;
    d = c + 1764;
    wynik = d - dat;
    cout << wynik;
}