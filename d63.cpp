#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
// ���������
struct Num
       {
       int integer;
       double real;
       char symbol;
       };
int main()
{
Num *ps = new Num;
cout<<"������� �������� ���������"<<endl;
cout<<"������� ������ = ";
cin.get(ps->symbol);
cout<<"������� ����� ����� = ";
cin>>ps->integer;
cout<<"������� ������������ ����� = ";
cin>>ps->real;

// ������ ������� ������ ������� �� ��� ���������
cout<<"����� ������"<<endl;
cout<<"����� ����� = "<<(*ps).integer<<endl;
cout<<"������������ ����� = "<<(*ps).real<<endl;
cout<<"������ = "<<(*ps).symbol<<endl;
delete ps;
system("Pause");
return 0;
}



 
