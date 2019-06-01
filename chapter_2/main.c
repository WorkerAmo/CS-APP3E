#include <string.h>
int main()
{
  void sort(int *name[], int n);
  void print(int **name, int n);

  int nums[] = {1, 2, 3, 4, 5, 6};

  reverse_array(nums, 6);

  system("pause");
  return 0;
}

void inplace_swap(int *x, int *y)
{
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
  int l, r;
  for (l = 0, r = cnt - 1; l < r; l++, r--)
  {
    inplace_swap(&a[l], &a[r]);
  }
}