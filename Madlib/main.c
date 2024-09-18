#include <stdio.h>
#include <string.h>

int main(void){
    char noun[30];
    printf("Give me a noun: ");
    scanf("%s", noun);
    char verb[50];
    printf("Give me a verb: ");
    scanf("%s", verb);
    char adjective[90];
    printf("Give me a adjective: ");
    scanf("%s", adjective);
    char sentenceOne[900] = "Once upon a time there was a ";
    char sentenceOneA[900] = " and stupid ";
    char sentenceTwo[900] = " that loved to ";
    strcat(adjective, sentenceOneA);
    strcat(adjective, noun);
    strcat(sentenceOne, adjective);
    strcat(sentenceOne, sentenceTwo);
    strcat(sentenceOne, verb);
    printf(sentenceOne);
    return 0;
}