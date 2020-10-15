#ifndef CLL_H_
#define CLL_H_
typedef struct CourseLinkedList
{
    struct CourseNode *first;
} CourseLinkedList;

extern CourseLinkedList *createCourseLinkedList();
extern void printCourseLinkedList(CourseLinkedList *list);
extern void insertCourseLinkedList(CourseLinkedList *list, Course *newData);

#endif