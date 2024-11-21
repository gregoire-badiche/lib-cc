#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct s_queue
{
    int *values;
    int size;
    int last;
    int first;
} t_queue;

t_queue createQueue(int);

void enqueue(t_queue *,int);

int dequeue(t_queue *);

#endif //UNTITLED1_QUEUE_H
