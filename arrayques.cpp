#include <iostream>
using namespace std;

int main()
{
  int large = 0, temp = 0;
  int a[4] = {4, 2, 1, 3};
  int s = sizeof(a) / sizeof(a[0]);
  for (int i = s - 1; i >= 0; --i)
  {
    cout << a[i] << " " ;
  }

    for(int i=0;i<s;++i)  {
      if(large<a[i]){
          large=a[i];

      }

    }
  for (int i = 0; i < s; ++i)
  {
    for (int j = 0; j < s - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    cout << a[i] << " ";
  }
  cout << "larges number" << large << endl;
  return 0;
}