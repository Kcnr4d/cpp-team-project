#include <iostream>
using namespace std;
int add(int a, int b) { 
   return a + b; 
}
int substract(int a,int b)
{
return a-b;
} 
int main() {
  cout << "Witaj w naszym programie!" << endl;
  return 0;
} #include <iostream>
using namespace std;

int main() {
  cout << "Witaj w naszym programie!" << endl;
  cout << "2 + 3 = " << add(2, 3) << endl;  
  cout<<"5-3 = "<<substract(5,3)<<endl;
return 0;
}
