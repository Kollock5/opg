#include <iostream>
using namespace std;
void minmax(int data[], int length, int *min, int *max);

int main()
{
  int data[] = {4, 8, 23, -17, 2, -6};
  int length = sizeof(data) / sizeof(data[0]);
  int min = 0, max = 0;
  minmax(data, length, &min, &max);

  cout << "Min=" << min << " Max=" << max;
  return 0;
}

void minmax(int data[], int length, int *min, int *max)
{
  *min = data[0];
  *max = data[0];

  for (int i = 1; i < length - 1; i++)
  {
    if (data[i] < *min)
      *min = data[i];
    if (data[i] > *max)
      *max = data[i];
  }
}
