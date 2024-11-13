#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        fopen(argv[0], "r");
        printf("het opent"):
    }
    else{
        fopen("Error_msg_En.txt", "r");
        printf("het opent engels");
    }
}