#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int per = 10;
int *p;
p=&per;
cout<<"��� ��� �������� ���������� per"<<per<<"\n";
cout<<"� ��� ����� ������ ���\n �������� ���������� per= "<<&per<<endl;
for (int i=0;i<100;i++,p++)
    {
        cout<<p<<"  "<<*p<<endl;
    }
system("Pause");
return 0;
}



 
