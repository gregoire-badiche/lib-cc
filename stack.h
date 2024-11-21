#ifndef _STACK_H_
#define _STACK_H_

typedef struct s_stack
{
    int *values;
    int size;
    int nbElts;
} t_stack;

t_stack createStack(int);

void push(t_stack *, int);

int pop(t_stack *);

int top(t_stack);

int isEmpty(t_stack stack);

#endif //UNTITLED1_STACK_H
