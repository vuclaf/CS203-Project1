CC=gcc
CFLAGS=-I.
DEPS = main.c course.c course.h courseArrayList.c courseArrayList.h courseNode.c courseNode.h courseLinkedList.c courseLinkedList.h degree.c degree.h degreeArrayList.c degreeArrayList.h department.c department.h
OBJ = main.o course.o  courseArrayList.o courseNode.o courseLinkedList.o degree.o degreeArrayList.o department.o

%.o: %.c $(DEPS)
	$(CC) -g -c -o $@ $< $(CFLAGS)

project: $(OBJ)
	$(CC) -g -o $@ $^ $(CFLAGS)