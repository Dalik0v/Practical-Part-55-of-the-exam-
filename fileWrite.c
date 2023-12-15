#include <stdio.h>
#include <string.h>

int main() {
    char text[] = {"mama and papa!"};
    FILE *fp;
    fp = fopen("test.txt", "w");


    fprintf(fp, "test text\n!!!!!");
    
    fclose(fp);

    return 0;
}
