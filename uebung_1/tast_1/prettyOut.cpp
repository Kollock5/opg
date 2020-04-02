#include <iostream>
using namespace std;
void ausgabe(char c);
void ausgabe(char *c);

int main()
{
  ausgabe('a');
  ausgabe("hallo welt");
  return 0;
}

void ausgabe(char c)
{
  cout << "***\n*" << c << "*\n***\n";
}

void ausgabe(char *c)
{
  int length = strlen(c);
  string border = "**";
  for (int i = 0; i < length; i++)
  {
    border += "*";
  }

  cout << border << "\n*" << c << "*\n"
       << border << "\n";
}
