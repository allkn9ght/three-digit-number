#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    int edinica;
    int desyatki;
    int summa;
    int proizvedenie;
    int sto;

    cout << "������� ����������� �����: ";
    cin >> number;

    edinica = number % 10;
    desyatki = number / 10;
    sto = number / 100;
    summa = edinica + (desyatki %10) + sto;
    proizvedenie = edinica * (desyatki % 10) * sto;

    cout << "����� ������: " << edinica << "\n"
    << " ����� ��������: " << desyatki << "\n"
    << " ����� ����: " << summa << "\n"
    << " ������������ ��� ����: " << proizvedenie << endl;

    cout << "��� ������ ������� <Enter>..";
    fflush(stdin);
    cin.get();
    return 0;
}
