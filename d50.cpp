#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int *p;
double *q;
p = new int;
q = new double(3.6);
cout<<"������� Int �����=  ";
cin>>*p;
cout<<"����� p"<<p<<endl;
cout<<"��� ��������="<<*p<<endl;
cout<<"� ������ ����� q= "<<q<<endl;
cout<<"�������� q= "<<*q<<endl;
delete p;
delete q;
system("Pause");
return 0;
}



 
