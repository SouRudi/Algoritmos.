#include <stdio.h>

int main() {
    float cel;
    
    printf("Digite a temperatura em cº: \n");
    scanf("%f",&cel);
    
    float far = (9*cel + 160)/5;
    
    printf("A temperatura em Fº e: %.2f\n",far);
    
    return 0;
}
