#include <iostream>
// #include <cstring>
const int ArSize =20;
using namespace std;
int main()
{
char name[ArSize];
cout<<"���� ��� ����������  ";
cin>> name;
cout <<"��� ���� ��� ����������� � � �����"<<endl;
int i = 0;
while (name[i] != '\0')
{
      cout<<name[i]<<":"<<int(name[i])<<endl;
      i++;
}
system("Pause");
return 0;
}



 
