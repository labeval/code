#include <stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack* ptr){
    if(ptr->top==-1){
        // printf("Khalli hai ");
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void Push(struct Stack* ptr, int value){
    if(isFull(ptr)){
        printf("Stack overflow\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
    
}
int Pop(struct Stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Empty\n");
        return -1;
    }
    else{
        int value = ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}

int main()
{
    struct Stack * sp=(struct Stack *) malloc(sizeof(struct Stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *) malloc(sp->size * sizeof(int));
    Push(sp,20);
    printf("%d",Pop(sp));
    return 0;
}

