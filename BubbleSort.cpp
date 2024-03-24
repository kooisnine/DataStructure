#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    int num=0;
    scanf("%d",&a);

    int A[a];

    for(int i=0;i<a;i++){
        scanf("%d",&b);
        A[i]=b;
    };

    for(int k=a-1;k>0;k--){
        for(int g=0;g<k;g++){
            if(A[g]>A[g+1]){
                c=A[g];
                A[g]=A[g+1];
                A[g+1]=c;
                num++;
            };
        };
    };

    for(int h=0;h<a;h++){
        printf("%d ",A[h]);
    }    
    printf("\n%d",num);


    return 0;
}