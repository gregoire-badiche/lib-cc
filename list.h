
#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H

#include "cell.h"


typedef struct s_std_list
{
    p_cell head;
} t_std_list;

typedef struct s_ht_list
{
    p_cell head;
    p_cell tail;
} t_ht_list;

void displayHtList(t_ht_list);

int isValInHtList(t_ht_list, int);

void removeValFromHtList(t_ht_list *, int);

void displayStdList(t_std_list);

int isEmptyStdList(t_std_list);

void addHeadStd(t_std_list *, int);

void addTailHt(t_ht_list *, int);

#endif