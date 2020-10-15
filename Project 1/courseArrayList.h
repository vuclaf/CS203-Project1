#ifndef CARR_H_
#define CARR_H_

typedef struct CourseArrayList
{
    struct Course **list;
    int size;
} CourseArrayList;

extern CourseArrayList *createCourseArrayList();

extern void resizeCourseArrayList(CourseArrayList *list);

extern void insertCourseArrayList(CourseArrayList *list, Course *deg);

#endif