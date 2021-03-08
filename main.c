#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_String();
char* reverse_words(char*);

int main(){

    int strings = 0;
    char* a = "!";
    while(*a != '\0'){
        a = get_String();
        printf("%s\n", a);
        char* b = reverse_words(a);
        printf("REVERSED: %s\n", b);
    };
    system("pause");
    return 0;
}

char* get_String(){
    char* a = (char*)malloc(1);
    char buf[11];
    int n, size = 0;
    *a = '\0';
    do{
        n = scanf("%10[^\n]", buf);
        if(n < 0){
            free(a);
            a = NULL;
            continue;
        }
        if(n == 0)
            scanf("%*c");
        else{
            size += strlen(buf);
            a = (char*)realloc(a, size + 1);
            strcat(a, buf);
        }
    }while(n > 0);
    return a;
}

char* reverse_words(char* string){
    int size = strlen(string);
    char* a = (char*)malloc(size * sizeof(char));
    if(a == NULL)
    {
        printf("A BCE!\n");
        return 0;
    }
    for(int i = size - 1; i >= 0; i--, a++){
        *a = *(string + i);
        printf("%c\n", *a);
    }
    *(a) = '\0';
//    scanf("%*[^\n]");
    return a - size;
}