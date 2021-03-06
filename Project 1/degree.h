#ifndef DEG_H_
#define DEG_H_
#include "courseLinkedList.h"
#include "degreeReq.h"

typedef struct Degree
{
    char *name;
    char *dept;
    struct DegreeReq *req;
} Degree;

extern Degree *createDeg(char *name);
extern void addCourseDeg(Degree *deg, char *newCourse, char * or);
extern void setDeptDeg(Degree *deg, char *dept);
extern void printDeg(Degree *dept);

#endif