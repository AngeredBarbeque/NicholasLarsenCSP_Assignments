#include <stdio.h>
char name[30] = "John";
void namePrint(char name[]){
    printf("Hello %s\n", name);
}

int main(void){
    namePrint(name);
    char name2[30] = "Jim";
    namePrint(name2);
    char name3[30] = "Clayton";
    namePrint(name3);
    char name4[30] = "Larry";
    namePrint(name4);
    char name5[30] = "Tina";
    namePrint(name5);
    return 0;
}