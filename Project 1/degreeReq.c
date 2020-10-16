#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "courseLinkedList.h"
#include "degreeReq.h"

DegreeReq *createDegreeReq()
{
    DegreeReq *degReq = (DegreeReq *)malloc(sizeof(DegreeReq));
    degReq->list = (CourseLinkedList **)malloc(10 * sizeof(CourseLinkedList *));
    for (int i = 0; i < 10; i++)
    {
        degReq->list[i] = createCourseLinkedList();
    }
    return degReq;
}

void resizeDegreeReq(DegreeReq *arr)
{
    arr->list = (CourseLinkedList **)realloc(arr->list, arr->size * 2 * sizeof(CourseLinkedList *));
    for (int i = 0; i < arr->size; i++)
    {
        arr->list[i] = (CourseLinkedList *)malloc(sizeof(CourseLinkedList));
    }
}

void insertDegreeReq(DegreeReq *arr, CourseLinkedList *courses)
{
    if (arr == NULL)
    {
        printf("Degree ArrayList is NULL\n");
        return;
    }
    if (arr->list == NULL || courses == NULL)
    {
        printf("CLL in DegReq is NULL\n");
        return;
    }
    if ((arr->size) % 10 == 0 && arr->size != 0)
        resizeDegreeReq(arr);
    if (arr->size == 0)
    {
        arr->list[0] = courses;
        arr->size++;
        return;
    }
    else
    {
        arr->list[arr->size] = courses;
        arr->size++;
        return;
    }
}

void printDegreeReq(DegreeReq *arr)
{
    if (arr == NULL)
    {
        printf("DR is Null");
        return;
    }
    if (arr->list == NULL && arr->size == 0)
    {
        printf("Something is NULL\n");
        return;
    }
    for (int i = 0; i < arr->size; i++)
    {
        printCourseLinkedList(arr->list[i]);
    }
}

//Search and return the requirement by title of the course
//if found return the index of the requirement(CLL) if not return -1
int searchCourseDegreeReq(DegreeReq *degReq, char *course)
{
    if (degReq->size == 0)
    {
        return -1;
    }
    for (int i = 0; i < degReq->size; i++)
    {
        int search = searchCourseLinkedList(degReq->list[i], course);
        printf("%d\n", search);
        if (search == -1)
        {
            printf("Something in DegreeReq's CourseLinkedList is null\n");
            return -1;
        }
        else if (search == 0)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}
