#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[400], last[200];

    printf("Введите свое имя: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* удалить новую строку в конце */

    printf("Введите свое фамилию: ");
    gets(last); /* переполнение буфера? что это такое? */

    printf("Hello %s %s!\n", first, last);
    return 0;
}
