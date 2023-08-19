#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int *number = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    
    #pragma omp parallel for reduction(+:sum)
    for(i=0;i<n;i++){
        sum+=number[i];
    }

    int avg=sum/n;
    printf("%d\n",avg);
    free(number);

}