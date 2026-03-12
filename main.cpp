#include <iostream>
using namespace std;
int multiply(int a, int b) {
  return a * b; 
}

int add(int a, int b) { 
   return a + b; 
}
int substract(int a,int b) //funkcja ktora odejmuje 2 inty
{
return a-b;
} 

int main() {
  cout << "Witaj w naszym programie!" << endl;
  cout << "2 + 3 = " << add(2, 3) << endl;  
  cout<<"5-3 = "<<substract(5,3)<<endl;
  cout << "2 * 3 = " << multiply(2, 3) << endl;
return 0;
}
