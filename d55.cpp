#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
double wages[3] = {101.0,102.2,103.3};
short stacks[3] = {3,2,1};
double *pw = wages;
short *ps =&stacks[0];
cout<<"pw= "<<pw<<"  *pw= "<<*pw<<endl;
pw=pw+1;
cout<<"pw= "<<pw<<"  *pw= "<<*pw<<endl;
cout<<"ps= "<<ps<<"   *ps= "<<*ps<<endl;
ps=ps+1;
 cout<<"ps= "<<ps<<"   *ps= "<<*ps<<endl;
 cout<<"��������� � ���� ��������� � ������� �������\n";
 cout<<"stacks[0} = "<<stacks[0]
 <<"  stacks[1] = "<< stacks[1]<<endl;
 cout<<"��������� � ���� ��������� � ������� ���������\n";
 cout<<"*stacks = "<<*stacks
 <<" *(stacks+1 = "<<*(stacks+1)<<endl;
 cout<<sizeof(wages)<<" = ������ ������� wages\n";
 cout<<sizeof(pw)<<" = ������ ��������� pw\n";
 
system("Pause");
return 0;
}



 
