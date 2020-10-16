#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "degree.h"
#include "degreeArrayList.h"

DegreeArrayList *createDegreeArrayList()
{
    DegreeArrayList *arr = (DegreeArrayList *)malloc(sizeof(DegreeArrayList));
    arr->size = 0;
    arr->list = (Degree **)malloc(10 * sizeof(Degree *));
    for (int i = 0; i < 10; i++)
    {
        arr->list[i] = (Degree *)malloc(sizeof(Degree));
    }
    return arr;
}

void resizeDegreeArrayList(DegreeArrayList *arr)
{
    arr->list = (Degree **)realloc(arr->list, arr->size * 2 * sizeof(Degree *));
    for (int i = 0; i < arr->size * 2; i++)
    {
        arr->list[i] = (Degree *)malloc(sizeof(Degree));
    }
}

void insertDegreeArrayList(DegreeArrayList *arr, Degree *deg)
{
    if (arr == NULL)
    {
        printf("Degree ArrayList is NULL\n");
        return;
    }
    if (arr->list == NULL && arr->size == 0 || deg == NULL)
    {
        printf("Something is NULL\n");
        return;
    }
    if ((arr->size) % 10 == 0 && arr->size != 0)
        resizeDegreeArrayList(arr);
    arr->list[arr->size + 1] = deg;
    arr->size++;
}

void printDegreeArrayList(DegreeArrayList *arr)
{
    if (arr == NULL)
    {
        printf("DAL is Null");
        return;
    }
    if (arr->list == NULL && arr->size == 0)
    {
        printf("Something is NULL\n");
        return;
    }
    for (int i = 0; i < arr->size; i++)
    {
        printf("%s", arr->list[i]->name);
    }
}