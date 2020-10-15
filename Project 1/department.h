#ifndef DEPT_H_
#define DEPT_H_

typedef struct Department
{
    char *name;
    struct DegreeArrayList *deg;
    struct CourseArrayList *courses;
} Department;

extern Department *createDept(char *name);
extern void addCourseDept(Department *dept, Course *course);
extern void addDegDept(Department *dept, Degree *deg);
extern void printDept(Department *dept);

#endif