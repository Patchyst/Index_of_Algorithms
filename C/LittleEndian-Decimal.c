// little endian base 2 to base 10
int binToDec(char *binary){
    char *c = &binary[0]; int b = 0, ret = 0, mult = 1;
    while(*c != '\0'){
    for(int i = 1; i<=b; i++){
        mult*=2;
        }   
        ret+=(mult*(((int)*c-(int)'0')));
        b++; c+=1;
        mult = 1;
    }
    return ret;
}
