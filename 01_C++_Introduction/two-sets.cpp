
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n%4==1 || n%4==2){
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    if (n%4){
        cout << (n+1)/2 << endl << 1 << " " << 2 << " ";
        for (int i=0; i<n/4; ++i)
            cout << 4+4*i << " " << 7+4*i << " ";
        cout << endl << n/2 << endl << 3 << " ";
        for (int i=0; i<n/4; ++i)
            cout << 5+4*i << " " << 6+4*i << " ";
        cout << endl;
    } else {
        cout << n/2 << endl;
        for (int i=0; i<n/4; ++i)
            cout << 1+4*i << " " << 4+4*i << " ";
        cout << endl << n/2 << endl;
        for (int i=0; i<n/4; ++i)
            cout << 2+4*i << " " << 3+4*i << " ";
        cout << endl;
    }
}
