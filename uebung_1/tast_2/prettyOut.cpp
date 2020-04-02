#include <iostream>
using namespace std;
void ausgabe(char c);
void ausgabe(char *text);
void ausgabe(char *text, char randZeichen);

int main()
{
  ausgabe('a');
  ausgabe("hallo welt");
  ausgabe("hallo welt", '+');

  return 0;
}

void ausgabe(char c)
{
  cout << "***\n*" << c << "*\n***\n";
}

void ausgabe(char *text)
{
  int length = strlen(text);
  string border = "**";
  for (int i = 0; i < length; i++)
  {
    border += "*";
  }

  cout << border << "\n*" << text << "*\n"
       << border << "\n";
}

void ausgabe(char *text, char randZeichen)
{
  int length = strlen(text);
  string border = "";
  border = randZeichen;
  border += randZeichen;

  for (int i = 0; i < length; i++)
  {
    border += randZeichen;
  }

  cout << border << "\n"
       << randZeichen << text
       << randZeichen << "\n"
       << border << "\n";
}