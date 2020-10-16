#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseLinkedList.h"
#include "course.h"

Course *createCourse(char *title, char *name)
{
    Course *c = (Course *)malloc(sizeof(Course));
    c->title = title;
    c->name = name;
    c->pre = (CourseLinkedList *)malloc(sizeof(CourseLinkedList));
    return c;
}

void addCourseReq(Course *course, char *newReq)
{
    insertCourseLinkedList(course->pre, newReq);
}

CourseLinkedList *getPrereqCourse(Course *course)
{
    return course->pre;
}

void printCourse(Course *c)
{
    printf("%s\n", c->title);
    printf("%s\n", c->name);
}