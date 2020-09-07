#include <stdio.h>
/* Greatest common divisor function */
int greatestCommonDivisor(int numberOne, int numberTwo){
    int remainder = numberOne % numberTwo;
    if(numberOne < 0 || numberTwo < 0){
        printf("\n[-] ERROR input is negative\n");
        return 0.0;
    }
    while(remainder != 0){
         if(numberTwo % remainder == 0){
             return remainder;
         }
         else
         {
             remainder = numberTwo % remainder;
         }    
    }
    return numberTwo;
}

int main(int argc, char *argv[]){
    printf("\nGCD of 12 and 30: %d\n", greatestCommonDivisor(12, 30));
    return 1;
}
