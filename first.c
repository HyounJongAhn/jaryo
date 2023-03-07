#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int qs1(){
    int K,N,M;

    scanf("%d%d%d",&K,&N,&M);
    if(M<(K*N)){
        printf("%d",(K*N)-M);
    }
    else{
        printf("0");
    }
    return 0; 


}

int qs2(){
    int grade = 0;
    scanf("%d",&grade);
    if((0<=grade)&&(grade<=100)){
        if((90<=grade)&&(grade<=100)){
            printf("A");
        }
        else if((80<=grade)&&(grade<90)){
            printf("B");
        }
        else if((70<=grade)&&(grade<80)){
            printf("C");
        }
        else{
            printf("D or F");
        }
    }
    else{
        printf("Wrong Input");
        return 0;
    }
    return 0;
}

int qs3(){
    int grade = 0;
    scanf("%d",&grade);
    if((0>grade)||(grade>100)){
        printf("Wrong Input");
        return 0;
    }
    switch(grade/10){
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        default :
            printf("D or F");
            break;
    }
    return 0;

}
int qs4(){
    int num;
    int i;
    char num1[100];

    scanf("%d",&num);
    sprintf(num1,"%d",num);
    for ( i = strlen(num1); i >= 0;i--){
        printf("%c\n",num1[i]);
    }
    return 0;
}

int qs5(){
    int N;
    int sum1 = 0;
    int sum2 = 0;
    scanf("%d",&N);
    for (int i = 0; i<N/2;i++){
        sum1 += (N/)

    }
}
int main(){
    //qs1();
    //qs2();
    //qs3();
    //qs4();

    return 0;

}