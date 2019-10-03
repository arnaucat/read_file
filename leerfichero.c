#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("quijote.txt", "r");
    if(fp == NULL) {
        perror("Unable to open file!");
        exit(1);
    }

    char chunk[100];

    while(fgets(chunk, sizeof(chunk), fp) != NULL) {
        fputs(chunk, stdout);
        fputs("\n", stdout);  
    }

    fclose(fp);
}
