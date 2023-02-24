#include <stdio.h>

int main()
{
    int contador=1;

    for(int j=1;j<=4;j++){
    for(int i=1;i<=10;i++){
    printf("*");    
}
    printf("\n");
}

   for(int i=1;i<=5;i++){

    for(int j=1;j<=i;j++){
        printf("*");

  } 
    printf("\n");
    
    } 
    
    for(int i=1;i<=5;i++){
        for(int k=5;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        
        printf("\n");
    }
    
 
   for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<i*2;k++){
        printf("*");
        }
                printf("\n");

    }
    
    
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<i*2;k++){
            contador=i;

            printf("%d",contador);

        }
                printf("\n");

    }
    
    for(int i=1;i<=5;i++){
        
        for(int j=1;j<=5;j++){
            printf(" ");
        }
        for(int k=1;k<i+1;k++){
            contador=k;

            printf("%d",contador);

        }
       
                printf("\n");

    }
   for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            contador=i+1-k;

            printf("%d",contador);

        }
       
                printf("\n");

    }
    return 0;
}
