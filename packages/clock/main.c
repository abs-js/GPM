#include <stdio.h>
#include <time.h>
int main(void){
    time_t t = time(0);
    struct tm* tm = localtime(&t);
    printf("%02d:%02d\n", tm->tm_hour, tm->tm_min);
    return 0;
}
