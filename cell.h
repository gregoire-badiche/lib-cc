#ifndef UNTITLED_CELL_H
#define UNTITLED_CELL_H

struct s_cell
{
    int value;
    struct s_cell *next;
};

typedef struct s_cell t_cell, *p_cell;

p_cell createCell(int);
////
void displayCell(t_cell);


#endif //UNTITLED_CELL_H
