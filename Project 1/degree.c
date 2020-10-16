#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseLinkedList.h"
#include "degreeReq.h"
#include "degree.h"

Degree *createDeg(char *name)
{
    Degree *deg = (Degree *)malloc(sizeof(Degree));
    deg->name = name;
    deg->dept = NULL;
    deg->req = createDegreeReq();
}

void addCourseDeg(Degree *deg, char *newCourse, char * or)
{
    int search = searchCourseDegreeReq(deg->req, or);
    printf("%d\n", search);
    DegreeReq *degreeReq = deg->req;
    if (degreeReq == NULL)
    {
        printf("Something is NULL\n");
        return;
    }
    if (search != -1)
    {
        insertCourseLinkedList(degreeReq->list[search], newCourse);
    }
    else
    {
        CourseLinkedList *cll = createCourseLinkedList();
        insertCourseLinkedList(cll, newCourse);
        insertDegreeReq(deg->req, cll);
    }
}

void setDeptDeg(Degree *deg, char *dept)
{
    deg->dept = dept;
}

void printDeg(Degree *deg)
{
    printf("%s\n%s\n", deg->name, deg->dept);
    printDegreeReq(deg->req);
}