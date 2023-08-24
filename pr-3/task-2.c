#include <stdio.h>
 main() {
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);

  for (int b = 1; b <= 10; ++b) {
    printf("%d * %d = %d \n", a, b, a * b);
  }

}
