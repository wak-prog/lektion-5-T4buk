#include <stdio.h>

int signum(int sig){
    
    // switch(sig){
    //     case 0:
    //     sig = -1;
    //     break;
    //     case 1:
    //     sig = 0;
    //     break;
    //     case 2:
    //     sig = 1;
    //     break;
    //     default:
    //     printf("Zzz\n");
    // }
    if (sig < 0){
        return -1;
    }else if(sig == 0){
        return 0;
    }else{
        return 1;
    }
}
int main(){

    int sig;
    printf("Bitte eine Zahl eingeben: ");
    scanf("%d",&sig);
    int Vzahl = signum(sig);
    printf("%d\n",Vzahl);
    
    return 0;

}