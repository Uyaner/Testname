#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int zad, podzad;
cout << "wybierz zadanie :" << endl;
cout << "1. Pole i obwod trojkata rownoramiennego" << endl;
cout << "2. Objetosc i pole kuli" << endl;
cout << "3. predkosc km/h na predkosc w wezlach" << endl;
cin >> zad;
switch(zad)
{
case 1:
    {
    int podst, wys, boki ;
    cout << "wybierz podzadanie:" << endl;
    cout << "1.Oblicz pole" << endl;
    cout << "2.Oblicz obwod" << endl;
    cin >> podzad;
    switch(podzad)
    {
    case 1:
        {
        cout << "Podaj podstawe :" << endl;
        cin >> podst;
        cout << "Podaj wysokosc :" << endl;
        cin >> wys;
        cout << "Twoje pole : " << podst * wys / 2 << endl;
        break;
        }
    case 2:
        {
        cout << "Podaj podstawe :" << endl;
        cin >> podst;
        cout << "Podaj boki " << endl;
        cin >> boki;
        cout << "Twoj obwod : " << podst + 2*boki << endl;
        break;
        }
    }
    }
    break;

case 2:
    {
    float wynik, r;
    float pi = 3.14;
    cout << "wybierz podzadanie:" << endl;
    cout << "1.Oblicz pole" << endl;
    cout << "2.Oblicz objetosc" << endl;
    cin >> podzad;
    switch(podzad)
    {
    case 1:
        {
        cout << "podaj promien (r):" << endl;
        cin >> r;
        wynik =  4 * M_PI * r * r;
        cout << "Twoje pole : " << wynik << endl;
        break;
        }
    case 2:
        {
        cout << "podaj promien (r):" << endl;
        cin >> r;
        wynik = (4 * M_PI * r * r * r)/3;
        cout << "Twoja objetosc : " << wynik << endl;
        break;
        }
    }
    }
    break;

case 3:
    {
    float pred, wezel;
    cout << "podaj predkosc (km/h):" << endl;
    cin >> pred;
    wezel = pred * 1.85166;
    cout << "Toje wezly : " << wezel << endl;
    break;
    }

}
        return 0;
}
