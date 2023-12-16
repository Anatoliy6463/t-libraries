#include <stdio.h>
int exponentiation(int A, int B, int C, int a2)
{
  a2 = A;
  for (int i = 0; i < B; i++)
  {
    a2 = A * A;
  }
  C = a2;
}
int calculate(int A, int B, int C, int a2, int in)
{
  if (in == '+') C = A + B;
  if (in == '-') C = A - B;
  if (in == '/') C = A / B;
  if (in == '*') C = A * B;
  if (in == '^') exponentiation(A, B, C, a2);
  return 0;
}
int calcmain(int A, int B, int C, int a2, int in)
{
  scanf("%d%d", &A, &B);
  in = getchar();
  calculate(A, B, C, a2, in);
}
