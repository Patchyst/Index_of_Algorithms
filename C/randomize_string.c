// uses time.h and stdlib.h
// randomizes len bytes of buff
void randomize_string(char *buff, int len){
    int r;
    srand(time(NULL));
    char *current, *other, temp;
    for(int i = 0; i<len; i++){
        current = buff+i;
        other = buff+(rand() % len);
        temp = *current;
        *current = *other;
        *other = temp;
    }
}
