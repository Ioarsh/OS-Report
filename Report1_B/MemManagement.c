#include<stdio.h>
#include<stdlib.h>
int glo1,glo2,glo3;

void call_stack(int depth){
    int stack_variable;
    printf("(Depth: %d)Address of stack_variable: %p\n",depth,&stack_variable);
    call_stack(depth+1);
    
}

int main(){

    ///stack
    printf("This is heap growth\n");
    call_stack(0);
    printf("--------------------------------------------\n");

    ///heap
    int *heap_variable_1 = (int *)malloc(sizeof(int));
    int *heap_variable_2 = (int *)malloc(sizeof(int));
    int *heap_variable_3 = (int *)malloc(sizeof(int));
    printf("This is heap growth\n");
    printf("Address of heap_variable_1: %p\n",heap_variable_1);
    printf("Address of heap_variable_2: %p\n",heap_variable_2);
    printf("Address of heap_variable_3: %p\n",heap_variable_3);
    printf("--------------------------------------------\n");

    ///data(global variable)
    printf("This is data address\n");
    printf("Address of glo1: %p\n",&glo1);
    printf("Address of glo2: %p\n",&glo2);
    printf("Address of glo3: %p\n",&glo3);
    printf("--------------------------------------------\n");

}