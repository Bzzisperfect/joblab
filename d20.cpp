#include <iostream>
#include <climits>
using namespace std;
int main()
{
double *ukaz[5];
double x=3.0;
cout <<"x="<<x<<"\n";
ukaz[0]=&x;
double y=7;
ukaz[1]=&y;
cout<<"&x= "<<&x<<"\n";
cout<<"----------------------"<<endl;
for (int r=0;r<5;r++)
{

cout<<"�������� "<< ukaz[r] << "\n";
cout<<"��� ��� �����= "<<*ukaz[r]<<"\n";
}
    system("Pause");
return 0;
}
 
