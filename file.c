#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Введите свое имя: ");
    fgets(name, 100, stdin);
    printf("length = %d\n", strlen(name)); /* строка отладки*/
    name[strlen(name)-1] = '\0'; /* удалить новую строку в конце*/

    printf("Здравствуй, %s!\n", name);
    return 0;
}
