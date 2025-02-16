#include <stdio.h>
int main(){
    int y;
    char ans;
    
    do{
        printf("\n calculator");
        printf("\n 1 addition");
        printf("\n 2 substraction");
        printf("\n 3 multiply");
        printf("\n 4 divid");
        printf("\n 5 back");
        printf("\n select choice 1 to 5");
        scanf("%d",&y);
        switch(y){
            case 1:
            printf("\n welcome to addision");
            adda();
            break;
            case 2:
            printf("\n welcome to subtaraction");
            suba();
            break;
            case 3:
            printf("\n welcome to multiply");
            multa();
            break;
            case 4:
            printf("\n welcome to divid");
            diva();
            break;
            default:
            printf("\n back");
            break;
        }
        printf("\n do u want to count (y/n)");
        scanf("%s",&ans);
    }
    while(ans=='y');
    return 0 ;
}
  adda(){
        int a,b ,c;
    printf("\n enter  two number :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
    }

    suba(){

    int a,b ,c;
    printf("\n enter  two number :");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("%d",c);


}
multa(){
    int a,b ,c;
    printf("\n enter  two number :");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("%d",c);
}
    
diva(){
    int a,b ,c;
    printf("\n enter  two number :");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%d",c);
}


