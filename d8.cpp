#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n_int = INT_MAX; // �������� � ���������� ������������ �����
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    // ������ ������� ���������� � ��������
    cout << "��� n_int=  "<< n_int << endl;
    cout << "��������� ��� �����= " << sizeof(int) << endl; // ������ �����?
    cout << "�������� ��������� n_short=  " << sizeof n_short << endl;
    cout << "������ ���������� � long= " << n_long << endl;
    cout << "������������ ����=  " << LONG_MAX << endl;
    cout << "��� �� ������ ���������" << sizeof(short) << endl;
    cout << "�� � ��� ��� short=  " << SHRT_MAX << endl;
    cout << "���=  " << CHAR_BIT << endl;
    cout << "�������= int " << INT_MIN << endl;
    cout << "�������= long  " << LONG_MIN << endl;
    cout << "������� short=   " << SHRT_MIN <<endl;
    //�����������
    cout << "�������� char " << UCHAR_MAX << endl;
    cout << "����= long  " << ULONG_MAX << endl;
    cout << "���� short=   " << USHRT_MAX <<endl;
    system("Pause");
return 0;
}
 
