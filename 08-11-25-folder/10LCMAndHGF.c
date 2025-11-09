#include <stdio.h>
#include <conio.h>
void main()
{
  int num1, num2, LCM, HGF, i;
  printf("Enter First Number\n");
  scanf("%d", &num1);
  printf("Enter Second Number\n");
  scanf("%d", &num2);
  for (i = 1; i <= num1 && i <= num2; i++)
  {
    if (num1 % i == 0 && num2 % i == 0)
      HGF = i;
  }
  LCM = (num1 * num2) / HGF;
  printf("HGF of number %d And number %d is : %d\n", num1, num2, HGF);
  printf("LCM of number %d And number %d is : %d\n", num1, num2, LCM);

  getch();
}
