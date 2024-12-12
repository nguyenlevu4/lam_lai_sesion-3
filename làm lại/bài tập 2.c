#include <stdio.h>

int main(){
    float Celsius, Fahrenheit ;
    
    printf("nhập nhiệt cho Celsius: ");
    scanf("%f", &Celsius);
    
    printf("độ Celsius sang độ Fahrenheit là: %f", (Celsius * 9 / 5) + 32);
    return 0;
}