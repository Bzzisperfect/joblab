#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
int *pt = new int;
*pt = 2000;
cout<<"��������= "<<*pt<<"�����= "<<pt<<endl;
cout<<"������ pt= "<<sizeof(pt)<<endl;
cout<<"������ *pt= "<<sizeof(*pt)<<endl;
system("Pause");
return 0;
}



 
