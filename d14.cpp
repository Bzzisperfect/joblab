#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
  // ���������� ����������� ������������ �������
  //�������
  int mas[10];
  int i, *p;
  for (i=0;i<10;i++)
  {
  mas[i]=i;
  p=&mas[i];
  cout<<p<<" = ";
  cout<<mas[i]<<" ";
  cout<<endl;
}
  // ���������� ����� ����� �������
    system("Pause");
return 0;
}
 
