#include <stdio.h>

int main(void){
    double income[9]
    printf("This is a budget calculator.\n How much do you make a month?\n");
    fgets(income, sizeof(income), stdin);
    printf("You make %f", income);
    return 0;
}