#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "course.h"
#include "courseArrayList.h"

CourseArrayList *createCourseArrayList()
{
    CourseArrayList *arr = (CourseArrayList *)malloc(sizeof(CourseArrayList));
    arr->size = 0;
    arr->list = (Course **)malloc(10 * sizeof(Course *));
    for (int i = 0; i < 10; i++)
    {
        arr->list[i] = (Course *)malloc(sizeof(Course));
    }
    return arr;
}

void resizeCourseArrayList(CourseArrayList *arr)
{
    arr->list = (Course **)realloc(arr->list, arr->size * 2 * sizeof(Course *));
    for (int i = 0; i < arr->size; i++)
    {
        arr->list[i] = (Course *)malloc(sizeof(Course));
    }
}

void insertCourseArrayList(CourseArrayList *arr, Course *c)
{
    if (arr == NULL)
    {
        printf("Course ArrayList is NULL\n");
        return;
    }
    if (arr->list == NULL && arr->size == 0 || c == NULL)
    {
        printf("Something is NULL\n");
        return;
    }
    if ((arr->size) % 10 == 0 && arr->size != 0)
        resizeCourseArrayList(arr);
    arr->list[arr->size + 1] = c;
    arr->size++;
}

void printCourseArrayList(CourseArrayList *arr)
{
    if (arr == NULL)
    {
        printf("CRL is Null");
        return;
    }
    if (arr->list == NULL && arr->size == 0)
    {
        printf("Something is NULL\n");
        return;
    }
    for (int i = 0; i < arr->size; i++)
    {
        printf("%s", arr->list[i]->title);
    }
}