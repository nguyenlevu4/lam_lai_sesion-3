#include <stdio.h>

int main(){
    float a, b;
    
    printf("nhập chiều tam giác: ");
    scanf("%f", &a);
    
    printf("nhập cạnh đáy tam giác: ");
    scanf("%f", &b);
    
    printf("diện tích tam giác là: %.2f", 0.5 * a * b);
    
    return 0;
}
    