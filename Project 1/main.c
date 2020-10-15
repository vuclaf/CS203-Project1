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

void main()
{
    Department *d1 = createDept("LIEW");
    Course *c1 = createCourse("L 101", "Introduction to Liew", d1);
    Degree *deg1 = createDeg("BSh. in Liewology");
    addCourseDept(d1, c1);
    addDegDept(d1, deg1);
}