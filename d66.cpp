#include <iostream>
#include <string>
using namespace std;
int main()
{
   cout<<"��� � ���� ����������"<<endl;
   cout<<"� ��� ���� �����"<<endl;
   double num;
   double sum=0.0;
   for (int i=0;i<5;i++)
   {
       cout<<"������� "<<i<<"   ";
       cin>>num;
       sum+=num;
   };
   cout<<"����������"<<endl;
   cout<<"����� ����� = "<<sum<<endl;
   cout<<"������� = "<<(sum/5)<<endl;
   
    system("Pause");
return 0;
}



 
