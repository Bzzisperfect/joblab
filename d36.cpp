#include <iostream>
using namespace std;
int fakt(int d)
    {
     if (d==1) return 1;
     else
     return d*fakt(d-1);      
     }

int main() // ������ ���� �����
{
cout<<"������� ����� ��� ����������=  ";
double v;
cin>>v;
cout<<"���������=  "<<fakt(v)<<endl;
system("Pause");
return 0;
}



 
