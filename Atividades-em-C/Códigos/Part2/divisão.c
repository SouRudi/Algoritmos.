#include <stdio.h>

int main() {

    int num, dois, tres;
    
    printf("\t\tDigite um número: ");
    scanf("%d", &num);
    
    dois = num%2;
    tres = num%3;
    
    if(dois == 0 && tres == 0){
    printf("\n%d é divisível por 2 e 3 simultaneamente", num);
    }else{
    printf("\n%d NÃO é divisível por 2 e 3 simultaneamente", num);
    }
    
    return 0;
}
