#include <iostream>
using namespace std;

int main ()
{
  int* p = NULL;

  if ( NULL != p )
    *p = 30;

  cout << "p : " << p << endl;
  // Error!
  // cout << "*p : " << *p << endl;


  int a = 100;
  p = &a;

  cout << "p &a : " << p << endl;
  cout << "*p : " << *p << endl;

  if ( p )
    *p = 30;

  cout << "*p = 30 : " << p << endl;
  cout << "*p : " << *p << endl;

  return 0;
}