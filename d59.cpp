#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
// ���������
struct Marks
       {
       char name[80];
       int phys;
       int chem;
       int maths;
       } ivan,petr,sidor;
struct Exams
       {
       double phys;
       double chem;
       double maths;
       };
int main()
{
    strcpy(ivan.name,"������ ������");
    cout<<"������ = "<<ivan.name<<endl;
    cout<<"������� ������ �� ���������\n";
    cout<<"������ = ";
    cin>>ivan.phys;
    cout<<"����� = ";
    cin>>ivan.chem;
    cout<<"���������� = ";
    cin>>ivan.maths;
    // ������� ������� ���
    Exams srbal;
    srbal.phys=(double)ivan.phys;
    srbal.chem=(double)ivan.chem;
    srbal.maths=(double)ivan.maths;
    double dl=(srbal.phys+srbal.chem+srbal.maths)/3;
    cout<<"������� ����= "<<dl<<endl;
system("Pause");
return 0;
}



 
