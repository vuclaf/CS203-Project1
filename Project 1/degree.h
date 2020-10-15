#ifndef DEG_H_
#define DEG_H_
typedef struct Degree
{
    char *name;
    struct Department *dept;
    struct CourseLinkedList *req;
} Degree;

extern Degree *createDeg(char *name);
extern void addCourseDeg(Degree *dept, Course *course);
extern void setDeptDeg(Degree *dept, Department *deg);
extern void printDeg(Degree *dept);

#endif