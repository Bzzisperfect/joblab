#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices;
    cout<<"������� ����� ���������� ������� � \n"
    " ���������� �������, ������� ����� �������:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
          cout << "� ��� ���� ���� �� ";
          cout << probability(total,choices);
          cout << " ���� ��������\n";
          cout << "��������� ��� ����� (q ��� ������):";
    }
          cout << "�����!\n";
          system("Pause");
          return 0;
}
long double probability(unsigned numbers, unsigned picks)
{
   long double result = 1.0;
   long double n;
   unsigned p;  
   for (n=numbers, p=picks; p>0; n--,p--)
   result = result*n/p;
   return result;
}




 
