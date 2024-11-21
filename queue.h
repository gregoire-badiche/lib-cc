//
// Created by flasque on 19/10/2024.
//

#ifndef _QUEUE_H_
#define _QUEUE_H_
/**
 * @brief Structure for the queue of integers
 */
typedef struct s_queue
{
    int *values;
    int size;
    int last;
    int first;
} t_queue;

/**
 * @brief Function to create a queue
 * @param size : the size of the queue
 * @return the queue
 */
t_queue createQueue(int);

/**
 * @brief Function to enqueue a value in the queue
 * @param p_queue : pointer to the queue
 * @param value : the position to enqueue
 * @return none
 */
void enqueue(t_queue *,int);

/**
 * @brief Function to dequeue a value from the queue
 * @param p_queue : pointer to the queue
 * @return the value dequeued
 */
int dequeue(t_queue *);

#endif //UNTITLED1_QUEUE_H
