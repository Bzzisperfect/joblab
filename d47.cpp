#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int ln(char *str)
{
    int i=0;
    while(str[i])
    {
    i++;
    }
    return i;
}
int main()
{
 char str[20],str2[20];
 cout<<"������� ������=  ";
 gets(str);
 cout<<"���������� ��������= "<<ln(str);
 cout<<endl;
 cout<<"������� ������ ������ ��� ������";
 gets(str2);
 cout<<"��������= "<<(strcpy(str,str2))<<endl;
 cout<<"���������= "<<strcat(str,str2)<<endl;
 
 
system("Pause");
return 0;
}



 
