#include <stdlib.h>
#include <stdio.h>
#include "cell.h"
#include "list.h"

t_std_list createEmptyList() {
    t_std_list list;
    list.head = NULL;
    return list;
}

t_ht_list createEmptyHtList() {
    t_ht_list list;
    list.head = NULL;
    list.tail = NULL;
    return list;
}

int isEmptyStdList(t_std_list list) {
    if(list.head == NULL) {
        return 1;
    }
    return 0;
}

void removeValFromHtList(t_ht_list * list, int val) {
    if(!isValInHtList(*list, val)) {
        return;
    }
    p_cell tmp = list->head;
    p_cell prev;
    if(tmp->value == val) {
        list->head = tmp->next;
        if(tmp->next == NULL) {
            list->tail = NULL;
        }
        return;
    }
    prev = tmp;
    tmp = tmp->next;
    while(tmp->next != NULL) {
        if(tmp->value == val) {
            prev->next = tmp->next;
            return;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    if(tmp->next == NULL) {
        prev->next = NULL;
        list->tail = prev;
    }
}

void addHeadStd(t_std_list * list, int val) {
    p_cell tmp = list->head;
    p_cell cell = createCell(val);
    cell->next = tmp;
    list->head = cell;
}

int isValInHtList(t_ht_list list, int val) {
    p_cell curr = list.head;
    while(curr != NULL) {
        if(curr->value == val) {
            return 1;
        }
        curr = curr->next;
    }
    return 0;
}

void displayStdList(t_std_list list) {
    printf("list [head @-]-->");
    p_cell curr = list.head;
    while(curr != NULL) {
        printf("[ %d | @-]-->", curr->value);
        curr = curr->next;
    }
    printf("NULL\n");
}

void addTailHt(t_ht_list * list, int val) {
    t_cell * cell = createCell(val);
    if(list->head == NULL) {
        list->head = cell;
    } else {
        list->tail->next = cell;
    }
    list->tail = cell;
}

void displayHtList(t_ht_list list) {
    p_cell current = list.head;
    while (current != NULL) {
        displayCell(*current);
        current = current->next;
    }
}