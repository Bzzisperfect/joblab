#include <iostream>
#include <climits>
using namespace std;
int sumAB(int a,int b)
{
    int s=0; //������������
    s=a+b;
    return s;
}
int main()
{
int n,m;
cout<<"������� n=___ "<<"\b\b\b";
cin>>n;
cout<<"������� m=___ "<<"\b\b\b";
cin>>m;
cout<<"�������� ���������=  "<<sumAB(n,m)<<endl;
 system("Pause");
return 0;
}
 
