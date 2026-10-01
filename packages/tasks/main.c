#include <stdio.h>
int main(void){
    char line[80];
    printf("tarefa: ");
    if(!fgets(line, sizeof line, stdin)) return 0;
    printf("salva: %s", line);
    return 0;
}
