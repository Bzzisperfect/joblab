#include <iostream>
#include <climits>
using namespace std;
int main()
{
    double nMas_a[3],nMas_b[3],result;
    cout<<"������� �������� �������"<<"\n";
    for(int i=0;i<3;i++)
    {
            cout<<"������� "<< (i+1) <<" ������� ������� a"<<endl;
            cin>>nMas_a[i];
     }
     //������ �������� ������ ������
     for (int j=0;j<3;j++)
     {
         cout<<"������� "<< (j+1) <<" ������� ������� b"<<endl;
         cin>>nMas_b[j];
     }
    // ������ �� ����������
    double result_proverka,rab_per;
    result_proverka=rab_per=result=0;
      
    for (int r=0;r<3;r++)
    {
    result+=nMas_a[r]*nMas_b[r];
    //cout<<result<<"\n";
    //�� ���� result=result+(nMas_a*nMas_b) ??
    // �������� ������ ������������
    rab_per =(nMas_a[r]*nMas_b[r]); 
    result_proverka=result_proverka+rab_per;
    //cout<<result_proverka<<"\n";
    }
    cout<<result<<endl;
    cout<<result_proverka<<endl;
    //��� � ����������� ��������
    system("Pause");
return 0;
}
 
