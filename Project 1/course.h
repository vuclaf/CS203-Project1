#ifndef COURSE_H_
#define COURSE_H_

typedef struct Course
{
    char *title;
    char *name;
    struct CourseLinkedList *pre;
    struct Department *dept;
    struct DegreeArrayList *deg;
} Course;

extern Course *createCourse(char *title, char *name, Department *dept);
extern void addDegreeCourse(Course *course, Degree *degree);
extern void addCourseReq(Course *course, Course *newReq);
extern void setDepartmentCourse(Course *course, Department *dept);
extern DegreeArrayList *getDegreeListCourse(Course *course);
extern Department *getDepartmentCourse(Course *course);
extern CourseLinkedList *getPrereqCourse(Course *course);
extern void printCourse(Course *c);

#endif