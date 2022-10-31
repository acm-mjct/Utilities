#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int a[10]={1,2,3,4,45,64,64,64,55,90};

    srand (time (NULL));
    int num =rand()% 10+ 1;
    printf("%d",a[num]);
}
