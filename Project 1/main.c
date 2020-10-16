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
    Department *d1 = createDept("Department of LIEW");
    Course *c1 = createCourse("L 101", "Introduction to Liew");
    Course *c2 = createCourse("L 102", "Fuckology in Liews");
    Course *c3 = createCourse("L 269", "5AM Rowing");
    Degree *deg1 = createDeg("BSh. in Liewology");
    CourseLinkedList *cll = createCourseLinkedList();
    insertCourseLinkedList(cll, c1->title);
    insertCourseLinkedList(cll, c2->title);
    insertCourseLinkedList(cll, c3->title);
    addCourseDept(d1, c1);
    addDegDept(d1, deg1);
    addCourseDeg(deg1, c1->title, "");
    addCourseDeg(deg1, c2->title, "L 101");
    addCourseDeg(deg1, c3->title, "L 101");
    setDeptDeg(deg1, d1->name);
    printDeg(deg1);
}