#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
const int n=40;   
char str[40];
for (int i=0;i<n;i++)
    {
         str[i]='A'+i;
         cout<<str[i];
    }
    cout<<"\n";
    cout<<"������� ������=  ";
    gets(str);
    cout<<str<<endl;
    for(int j=0;j<n;j++)
    cout<<str[j];
    cout<<endl;
    cout<<"----------------------"<<endl;
    //������������ ����
    cout<<"��� ��� ����������    "<<str<<endl;
system("Pause");
return 0;
}



 
