// This C program is for searching a character array for a character's position (if it exists at all)
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
    // String to match against
    const char str[]="abcdefghigjlmnopqrstuvwxyz";
    char ch;
    printf("\nEnter a character to match for: ");
    scanf("%c", &ch);
    char *pGotChar = NULL;
    pGotChar = strchr(str, ch);
    if(pGotChar == NULL){printf("\n[-] No Matches Found For: %c \n", ch);}
    else{int pos = strlen(str)-strlen(pGotChar);printf("The character is at index: %d\n", pos);}
}
