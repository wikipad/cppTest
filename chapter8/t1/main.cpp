#include <iostream>
#include <string>

using namespace std;

void echo(string &str);

int main ()
{
  string a="abdc";
  echo (a);
}

void echo(string &str)
{
  cout<<str<<endl;
}







