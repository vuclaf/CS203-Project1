#ifndef CN_H_
#define CN_H_

typedef struct
    CourseNode
{
    struct Course *data;
    struct CourseNode *prev;
    struct CourseNode *next;
} CourseNode;

extern CourseNode *createNode(Course *d, CourseNode *p, CourseNode *nx);
extern void printNode(CourseNode *n);

#endif