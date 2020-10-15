#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "courseNode.h"
#include "courseLinkedList.h"
#include "department.h"
#include "degree.h"
#include "degreeArrayList.h"
#include "courseArrayList.h"

Department *createDept(char *name)
{
    Department *dept = (Department *)malloc(sizeof(Department));
    dept->name = name;
    dept->deg = createDegreeArrayList();
    dept->courses = createCourseArrayList();
}

void addCourseDept(Department *dept, Course *course)
{
    insertCourseArrayList(dept->courses, course);
}

void addDegDept(Department *dept, Degree *deg)
{
    insertDegreeArrayList(dept->deg, deg);
}

void printDept(Department *dept)
{
}