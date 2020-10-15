#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "courseNode.h"
#include "courseLinkedList.h"
#include "department.h"
#include "degree.h"
#include "degreeArrayList.h"

CourseNode *createNode(Course *d, CourseNode *p, CourseNode *nx)
{
    CourseNode *np = (CourseNode *)malloc(sizeof(CourseNode));
    np->data = d;
    if (p != NULL)
        np->prev = p;
    else
        np->prev = NULL;
    if (nx != NULL)
        np->next = nx;
    else
        np->next = NULL;
    return;
}

void printNode(CourseNode *n)
{
    printCourse(n);
}
