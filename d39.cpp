#include <iostream>
#include <string>
using namespace std;
void srr()
{
     cout<<"������� ������= ";
     string str2,str3;
     cin>>str2;
     cout<<"������ ������ =";
     cin>>str3;
     cout<<"�� ������ �������"<<endl;
     cout<<"������ ��� ������"<<endl;
     cout<<str2+str3<<"\n";
     str2+=str2;
     cout<<"��� ��� " <<str2<<endl;
     str3=str2;
     cout<<"��� ��� "<<str3<<endl;
}

int main()
{
srr();
system("Pause");
return 0;
}



 
