#include <cs50.h>
#include <stdio.h>
int main(void){
    char c = get_srint("Você concorda? ");
    if(c == 'y' || c == 'Y'){
        prinf("Concordo.\n");
    }
    else if(c =='n' || c == 'N'){
        printf("Não concordo.\n");
    }
} 