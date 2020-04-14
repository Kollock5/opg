#include <iostream>
using namespace std;

void tauschen(int *a, int *b);
void tauschen(float *a, float *b);
void tauschen(float a[], float b[], int length);

int main()
{
  int a = 5;
  int b = 10;
  tauschen(&a, &b);
  cout << "Int a="
       << a << " b = " << b << "\n";

  float fa = 5.5;
  float fb = 10.21;
  tauschen(&fa, &fb);
  cout << "Float a="
       << fa << " b=" << fb << "\n";

  float data1[10] = {2.0, 3.3, 4.5};
  float data2[10] = {3.5, 4.5, 1.2, 5.7, 8.7, 1.2, 3.3, 4.4, 2.3, 0.0};
  tauschen(data1, data2, 10);
  cout << data1[0];
  return 0;
}

void tauschen(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

void tauschen(float *a, float *b)
{
  float c = *a;
  *a = *b;
  *b = c;
}

void tauschen(float a[], float b[], int length)
{
  float **c = &a;
  *a = *b;
  *b = **c;
}