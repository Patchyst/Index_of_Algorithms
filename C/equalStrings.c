#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
bool checkEqual(char charArr[], char charArr2[], bool caseSense);
int main(int argc, char *argv[]){
    char hello[] = "Hello"; char world[] = "hello";
    bool isEqual = checkEqual(hello, world, false);
    printf(isEqual ? "True" : "False");
    printf("\n");
    return 0;
}
bool checkEqual(char charArr[], char charArr2[], bool caseSense){
    caseSense = false;
    int lenArray = len(charArr); int lenArray2 = len(charArr2);
    if(lenArray == lenArray2){
        for(int i = 0; i<=lenArray; ++i){
            if(caseSense){if(charArr[i] != charArr2[i]){return false;}}
            else if(!caseSense){if((char)toupper(charArr[i]) != (char)toupper(charArr2[i])){return false;}}
                }
        }
    return true;
}
