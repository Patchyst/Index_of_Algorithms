#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Compiled using gcc. This C program outputs the contents of a given file */

long int findSize(char filename[]){
        long int fileSize;
        FILE* filePointer = fopen(filename, "r"); // open file and store memory addr
        fseek(filePointer, 0, SEEK_END); // access the end of the file
        fileSize = ftell(filePointer); //filesize
        fclose(filePointer); //closing file
        return fileSize;
}

int main(int argc, char *argv[])
{
        int fd;
        char *filename;
        long int size;
        if (argc == 1){
                printf("[-]ERROR: No file argument given\n");
                exit(1);
        }
        filename = argv[1];
        // get filesize
        size = findSize(filename);
        /* read the file */
        fd = open(filename, O_RDONLY);
        if (fd == -1){
              printf("%s failed to read\n", filename);     
              exit(1);                                                              
        }
        char buf[size];
        read(fd, buf, size);
        close(fd);
        printf("%s", buf);
        return 0;
}
