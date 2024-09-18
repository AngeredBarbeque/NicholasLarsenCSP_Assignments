#include <stdio.h>
#include <string.h>

int main(void){
    char name[70];
    printf("What's your name?: ");
    scanf("%s", name);
    char decor[70] = "***";
    strcat(name, decor);
    strcat(decor, name);
    printf("%s\n", decor);
    return 0;
}
