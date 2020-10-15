#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "courseNode.h"
#include "courseLinkedList.h"
#include "department.h"
#include "degree.h"
#include "degreeArrayList.h"

CourseLinkedList *createCourseLinkedList()
{
    CourseLinkedList *list = (CourseLinkedList *)malloc(sizeof(CourseLinkedList));
    return list;
}

void printCourseLinkedList(CourseLinkedList *list)
{
    if (list->first == NULL)
    {
        printf("Empty List");
        return;
    }
    CourseNode *first = list->first;
    printNode(first);
    while (first->next != NULL)
    {
        first = first->next;
        printNode(first);
    }
}

void insertCourseLinkedList(CourseLinkedList *list, Course *newData)
{
    if (list->first == NULL)
    {
        printf("Empty List");
        return;
    }
    CourseNode *first = list->first;
    while (first->next != NULL)
    {
        first = first->next;
    }
    CourseNode *new = (CourseNode *)malloc(sizeof(CourseNode));
    initNodeP(new, newData, first, NULL);
    first->next = new;
}