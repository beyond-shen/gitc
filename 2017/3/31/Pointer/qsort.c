/*void  qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
qsort（即，quicksort）主要根据你给的比较条件给一个快速排序，主要是通过指针移动实现排序功能。排序之后的结果仍然放在原来数组中。

参数:
base, 是需要排序的目标数组名（或者也可以理解成开始排序的地址，因为可以写&s[i]这样的表达式）
nmemb, 是 参与排序的目标数组元素个数
size  是单个元素的大小（或者目标数组中每一个元素长度），推荐使用sizeof(s[0]）这样的表达式
compar 排序的方法*/
#include <stdio.h>
#include <stdlib.h>
int compare(const void * a, const void * b){
  return (*(int *)a) - (*(int*)b);
}
int main(void){
  int i = 0;
int a[5] = {2,10,1,5,3};
qsort(a, 5, sizeof(int), compare);
for(i = 0;i < 5;i++)
printf("%d\n", a[i]);
  return 0;
}
