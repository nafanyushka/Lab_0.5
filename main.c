#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char* p;
    p = (char*)malloc(80);
    scanf("%[^\n]80s", p);
    printf("%s\n", p);
    system("pause");
    return 0;
}
