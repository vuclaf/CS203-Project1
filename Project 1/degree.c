#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "courseNode.h"
#include "courseLinkedList.h"
#include "department.h"
#include "degree.h"
#include "degreeArrayList.h"

Degree *createDeg(char *name)
{
    Degree *deg = (Degree *)malloc(sizeof(Degree));
    deg->name = name;
    deg->dept = NULL;
    deg->req = createCourseLinkedList();
}

void addCourseDeg(Degree *deg, Course *course)
{
    insertCourseLinkedList(deg->req, course);
}

void setDeptDeg(Degree *deg, Department *dept)
{
    deg->dept = dept;
}

void printDeg(Degree *deg)
{
}