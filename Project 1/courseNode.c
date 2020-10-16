#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseNode.h"

CourseNode *createNode(char *d, CourseNode *p, CourseNode *nx)
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
    return np;
}

void printNode(CourseNode *n)
{
    printf("%s\n", n->data);
}
