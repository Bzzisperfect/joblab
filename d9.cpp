#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main()
{
   short sam = SHRT_MAX;
   unsigned short sue = sam;
   cout << "��������� sam   " << sam << endl;
   cout << " ��������� sue  " << sue << endl;
   sue++;
   sam++;
   cout << "��������� sam   " << sam << endl;
   cout << " ��������� sue  " << sue << endl;
   sam = sue = ZERO;
       cout << "��������� sam   " << sam << endl;
   cout << " ��������� sue  " << sue << endl;
   sue--;
   sam--;
   cout << "��������� sam   " << sam << endl;
   cout << " ��������� sue  " << sue << endl;
    system("Pause");
return 0;
}
 
