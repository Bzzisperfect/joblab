#include <iostream>
using namespace std;
void ars(char, int);
int main()
{
    int times;
    char ch;
    cout<<"������� ������: ";
    cin>> ch;
    while (ch!='q')
    {
          cout<<"������� �����: ";
          cin>>times;
          ars(ch,times);
          cout<<"\n������� ������ ������ ��� ������� "
          "������� q ��� ������: ";
          cin>> ch;
    }
    cout << "�������� ���������� times ����� "<<times<<"\n";
    system("Pause");
   return 0;
}
void ars(char c,int num)
{
     while (num-- > 0)
   // for (int t=0;t<num;t=t+1)
    // {
          // n = n-1;
          // cout << "��� �� ������ ���\n";
     cout << c;   
     //}
}




 
