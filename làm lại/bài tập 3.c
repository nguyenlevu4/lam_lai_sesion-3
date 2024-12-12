#include <stdio.h>

int main(){
    const float Pi = 3.14;
    float bankinh;
    
    printf("nhập giá trị bán kính: ");
    scanf("%f", &bankinh);
    
    
    printf("chi vi hình tròn là: %f\n", bankinh * 2 * Pi);
    printf("diện tích hình tròn là: %f", Pi * bankinh * bankinh);
    
    return 0;
}