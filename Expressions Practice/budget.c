#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char groceries[9];
    char transportation[9];
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%s", income);
    printf("How much do you spend on utilities a month?\n");
    scanf("%s", utilities);
    //printf("How much do you spend on groceries a month?\n");
    //scanf("%s", groceries);
    //printf("How much do you spend on transportation a month?\n");
    //scanf("%s", transportation);
    printf("You make %s\n", income);
    float spend[] = (float) income - (float) utilities;
    printf("%f", spend);
    return 0;
}