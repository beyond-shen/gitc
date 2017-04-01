/*计算股票的价值*/
#include <stdio.h>

int main(void){
  int prince, shares;
  float num, denom, value;

  printf("Enter share prince(must include a fraction):");
  scanf("%d%f/%f", &prince, &num, &denom);
  printf("Enter number of shares:");
  scanf("%d", &shares);

  value = (prince + num / denom) * shares;

  printf("value of holdings: $%.2f/n", value);
  return 0;
}
