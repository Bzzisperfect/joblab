#include <iostream>
#include <string>
using namespace std;
int main()
{
char arr1[20];
char arr2[20] = "�����";
string str1;
string str2 = "�������";
cout<<"������� ��������= ";
cin>>arr1;
cout<<"������� ������ �������� ";
cin>>str1;
cout<<"��� ��������� �������� "<<endl;
cout<<arr1<<arr2<<str1<<str2<<endl;
cout<<"������ ����� � ����� "<<arr2<<arr2[2]<<endl;
cout<<"������ ����� � ����� "<<str2<<str2[2]<<endl;
system("Pause");
return 0;
}



 
