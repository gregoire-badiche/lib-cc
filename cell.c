#include <stdio.h>
#include <stdlib.h>
#include "cell.h"


void displayCell(t_cell cell) {
    printf("[ %d | @-]-->", cell.value);
}

t_cell *createCell(int val)
{
    t_cell *p_res;

    p_res = (p_cell) malloc(sizeof(t_cell));

    p_res->value = val;
    p_res->next = NULL;

    return p_res;
}