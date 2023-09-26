#include <iostream>     
#include <iomanip>     
using namespace std;  
int main () {  
  double f =30.14;  
  cout << setprecision(2) << f << '\n';  
  cout << setprecision(4) << f << '\n';  
  cout << fixed;  
}
