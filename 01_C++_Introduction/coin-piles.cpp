
#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin >> t;

  int a , b;
  while (t--){
    cin >> a >> b;

    if ((a+b)%3 || a > 2*b || b > 2*a)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}
