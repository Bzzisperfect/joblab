#include <iostream>
 const int Max = 5;
 int fill_array(double ar[], int limit); // �������� ������� ������� ���������� ������������� �������� int
 void show_array(const double ar[], int n);// �������� ������� ������ �������
 void revalue(double r,double arp[], int n);// �������� ������� ��������� ��������
 int main()
     {
           using namespace std;
            double propertites[Max]; // �������� ����� �������, ���-�� ���������
            int size = fill_array(propertites, Max); // ������� ������� ������� � �������� ������ , �������� ���-�� ���������
            show_array(propertites,size); // ������� ������� ������
           cout << "������� ����������� ��������� = ";
            double factor;
           cin >> factor;
            revalue(factor,propertites,size); // ��������� ������� �������� �������, �� ����� ���������� 
            show_array(propertites,size); // ��� ���������� �������
             cout <<"�����"<<endl;
          system("Pause");
          return 0;
}
// �������� �������
int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i=0;i < limit; i++)
    {
        cout << "������� �������� � = " << (i+1) << "  ";
        cin>>temp;
        if (!cin) // �������� �� ������������ ����
        {
                  cin.clear();
                  while (cin.get() !='\n')
                  continue;
                  cout << "������������ ����, ������� ����� ���������\n";
                  break;
                  }
                  else if (temp < 0) // ����������
                  break;
                  ar[i] = temp;
                  }
                  return i;
                  }
                  //��������� ������� ����� ������������ �������,
                  // �� �� ��������� ������ �� ������ ar
        void show_array(const double ar[], int n)
        {
             using namespace std;
            for (int i = 0; i<n ;i++)
            {
                cout << "������� � " << (i+1) << "  " ;
                cout << ar[i] << endl;
                }
                }
                
   // ����������� ���� ������ �� ����� ����������� factor
   void revalue(double r,double ar[], int n)
     {
           using namespace std;
            for (int i = 0; i<n ;i++)
            ar[i] =  ar[i]*r;        
     }             



 
