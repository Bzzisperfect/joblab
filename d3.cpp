#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg;
    cout << "������� ������ ������� �����=  ";
    cin >> arg;
    cout << "������� � ����� ������� ����� ��������= ";
    double st;
    cin >> st;
    cout << "�� ������ �����=" << arg <<endl;
    res = sqrt(arg);
    cout <<"��������� ���������� ����������� �����=  "
         << res
         << endl;
    cout << "��������� ���������� � �������" << pow(arg,st) <<endl;
system("pause");         
return 0;
}
          
