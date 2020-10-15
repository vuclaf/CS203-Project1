#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseNode.h"
#include "courseLinkedList.h"
#include "department.h"
#include "degree.h"
#include "degreeArrayList.h"
#include "course.h"

Course *createCourse(char *title, char *name, Department *dept)
{
    Course *c = (Course *)malloc(sizeof(Course));
    c->title = title;
    c->name = name;
    c->dept = dept;
    c->deg = (DegreeArrayList *)malloc(sizeof(DegreeArrayList));
    c->pre = (CourseLinkedList *)malloc(sizeof(CourseLinkedList));
    return c;
}

void addDegreeCourse(Course *course, Degree *degree)
{
    insertDegreeArrayList(course->deg, degree);
}

void addCourseReq(Course *course, Course *newReq)
{
    insertCourseLinkedList(course->pre, newReq);
}

void setDepartmentCourse(Course *course, Department *dept)
{
    course->dept = dept;
}

DegreeArrayList *getDegreeListCourse(Course *course)
{
    return course->deg;
}

Department *getDepartmentCourse(Course *course)
{
    return course->dept;
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