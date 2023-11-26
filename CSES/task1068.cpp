#include <iostream>

using namespace std;

int main()
{
    bool gerade;
    long long n;
    long long m;

    cin >> n;
    cout << n<< " ";
    m = n = abs(n);
    while (n != 1){
  if ( m % 2 == 0){
    gerade = true;
  }
  else{
    gerade = false;
  }

    if( gerade == true){
        n = n/2;
        cout << n<< " ";
    }
    else{
        n = n*3;
        n = n+1;
        cout << n<< " ";
    }
    if (n == 1){
        return 0;
    }
   m = n = abs(n);
}

  return 0;
}