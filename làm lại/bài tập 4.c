#include <stdio.h>

int main()
{
   int a, b, c;
   printf("nhập điểm môn toán: ");
   scanf("%d", &a);
   
   printf("nhập điểm môn văn: ");
   scanf("%d", &b);
   
   printf("nhập điểm môn anh: ");
   scanf("%d", &c);
   
   printf("tổng điểm 3 môn: %d\n", a + b +c);
   printf("điểm trung bình môn là: %d", (a + b + c)/3);
   
   return 0;
}