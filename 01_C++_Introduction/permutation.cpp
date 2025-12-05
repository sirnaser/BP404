
#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin >> n;
  if (n < 4 && n != 1){
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  bool even = true;

  for (int i=2; ; i+=2){
    if (even && i > n){
      even = false;
      i = 1;
    } 
    else if (i > n) break;

    cout << i << " ";
  }
  return 0;
}
