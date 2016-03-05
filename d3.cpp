#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res,arg,d,st;
    cout << "Vvedite dannie pervogo chisla=  ";
    cin >> arg;
    cout << "Vvedite v kakuyu stepen' nuzhno vozvesti= ";
    cin >> st;
    d= pow(arg,st);
    cout << "Resultat vozvedeniya v stepen'= " << d <<endl;
system("pause");         
return 0;
}
          
