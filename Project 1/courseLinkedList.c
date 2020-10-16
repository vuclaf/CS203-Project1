#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseNode.h"
#include "courseLinkedList.h"

CourseLinkedList *createCourseLinkedList()
{
    CourseLinkedList *list = (CourseLinkedList *)malloc(sizeof(CourseLinkedList));
    return list;
}

void printCourseLinkedList(CourseLinkedList *list)
{
    if (list->first == NULL)
    {
        printf("Empty CLL List in Print\n");
        return;
    }
    CourseNode *first = list->first;
    printNode(first);
    while (first->next != NULL)
    {
        first = first->next;
        printf("OR ");
        printNode(first);
    }
}

void insertCourseLinkedList(CourseLinkedList *list, char *newData)
{
    if (list->first == NULL)
    {
        CourseNode *cn = createNode(newData, NULL, NULL);
        list->first = cn;
        return;
    }
    CourseNode *curr = list->first;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    CourseNode *new = createNode(newData, curr, NULL);
    curr->next = new;
}

int searchCourseLinkedList(CourseLinkedList *list, char *tar)
{
    if (list == NULL || list->first == NULL)
        return -1;
    CourseNode *curr = list->first;
    if (strcmp(curr->data, tar) == 0)
        return 1;
    while (curr->next != NULL)
    {
        if (strcmp(curr->data, tar) == 0)
            return 1;
        else
            curr = curr->next;
    }
    return 0;
}