#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string one="";
  string two="";
  cin>>one;
  cin>>two;
  cout<<one.size()<<" "<<two.size()<<"\n";
cout<<one+two<<"\n";
char temp=one[0];
one[0]=two[0];
two[0]=temp;
cout<<one<<" "<<two;
    return 0;
}
