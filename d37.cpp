#include <iostream>
using namespace std;
void fun(double x)
{
cout<<"����� = "<<endl;
}
void fun(double x, double y)
{
     cout<<"���� x = "<<x<<" � ����� y = "<<y<<endl;
}
void fun(char s)
{
     cout<<"������ = "<<s<<endl;
     int ch1;
     ch1 = s;
     cout<<"� ��� ���= "<<ch1<<endl;
}
int fun(int n)
{
    return n;
}
int main()
{
const double d1 = 20.0;
const double d2=30,d3=40;
const char ch = 'M';
const int f=1;
fun(d1);
fun(d2,d3);
fun(ch);
cout<<"���������= "<<fun(f)<<endl;
system("Pause");
return 0;
}



 
