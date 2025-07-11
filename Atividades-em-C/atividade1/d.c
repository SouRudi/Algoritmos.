#include <stdio.h>

int main() {
    float c;
    
    printf("Digite a temperatura em cº: \n");
    scanf("%f",&c);
    
    float f = (9*c + 160)/5;
    
    printf("A temperatura em Fº e: %.2f\n",f);
    
    return 0;
}
