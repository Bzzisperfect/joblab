#include <iostream.h>
#include <string>
#include <locale.h>
#include <clocale>
using namespace std;
int main()
    {
          int age,tr;
          setlocale(LC_ALL,"Russian");
          �SetConsoleCP(1251);
����SetConsoleOutputCP(1251);
          // ���������� ���������
          cout <<"Hello, World!\n";
          cin >> age;
          cout << "���� �����" << age;
          cin >> age;
          system("pause");
          return 0;
}
          
