#include <iostream>
#include <climits>
using namespace std;
int main()
{
    double nMas_a[3],nMas_b[3],result;
    cout<<"������� �������� �������"<<"\n";
    for(int i=0;i<3;i++)
    {
            cout<<"������� "<< i <<" ������� ������� a"<<endl;
            cin>>nMas_a[i];
     }
     //������ �������� ������ ������
     for (int j=0;j<3;j++)
     {
         cout<<"������� "<< j <<" ������� ������� b"<<endl;
         cin>>nMas_b;
     }
    // ������ �� ����������
    for (int r=0;r<3;r++)
    result+=nMas_a*nMas_b; //�� ���� result=result+(nMas_a*nMas_b) ??
    // �������� ������ ������������
    double result_proverka=result_proverka+(nMas_a*nMas_b);
    cout<<reult<<endl;
    cout<<reult_proverka<<endl;
    system("Pause");
return 0;
}
 
