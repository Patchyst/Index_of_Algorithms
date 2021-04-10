// x is integer to convert to printable binary, bitSize is the # of bits (i.g 16, 32, 64). The output will be placed in buffer.
void bin_to_char(u_int64_t x, int bitSize, char *buffer){
  u_int64_t hex = 0x1;
  for(int i = 0; i<bitSize; i++){ 
    buffer[i] = ((x & hex) ? '1' : '0');
    hex*=2;
  }
  buffer[bitSize] = '\0';
}
