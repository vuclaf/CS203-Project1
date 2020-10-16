#ifndef COURSE_H_
#define COURSE_H_
#include "courseLinkedList.h"

typedef struct Course
{
    char *title;
    char *name;
    struct CourseLinkedList *pre;
} Course;

extern Course *createCourse(char *title, char *name);
extern void addCourseReq(Course *course, char *newReq);
extern CourseLinkedList *getPrereqCourse(Course *course);
extern void printCourse(Course *c);

#endif