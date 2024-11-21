//
// Created by flasque on 16/06/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "cell.h"

//prototype des fonctions locales



// code des fonctions locales

// code des fonctions exportées


t_cell *createCell(int val)
{
    t_cell *p_res;

    p_res = (p_cell) malloc(sizeof(t_cell));

    p_res->value = val;
    p_res->next = NULL;

    return p_res;
}