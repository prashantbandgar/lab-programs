#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to IEt.\n";  
    filestream << "C++ Module.\n";  
    filestream.close();  
  }  
  else 
  cout <<"File opening is fail.";  
  return 0;  
}  
