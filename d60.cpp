#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
// ���������
struct Marks
       {
       char name[80];
       int phys;
       int chem;
       int maths;
       };
int main()
{
 const int n=3;
 bool state;
 char s[80];
 Marks st[n];
       for(int i=0;i<n;i++)
               {
                cout<<("Student name: "); 
                gets(st[i].name);
                st[i].phys=3+rand()%3;
                st[i].chem=3+rand()%3;
                st[i].maths=3+rand()%3;
                }
       do
         {
                cout<<"������� ������ �������� = ";
                gets(s);
                if(!strcmp(s,"exit")) return 0;
                state=true;
                for(int j=0;j<n;j++)
                        {
                        if(!strcmp(st[j].name,s))
                        {
                        state=false;
                        cout<<"������ = "<<st[j].phys<<endl;
                        cout<<"����� = "<<st[j].chem<<endl;
                        cout<<"������ = "<<st[j].maths<<endl;
                        break;
                        }
                        }
                if(state) cout<<"�� ������, ��� ������ �������� � ����� ������! \n";
                }
                while(true);
                
system("Pause");
return 0;
}



 
