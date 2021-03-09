all: linked_lists

linked_lists: linked_lists.o de_LinkedList.o
	gcc linked_lists.o de_LinkedList.o -lm -o linked_lists

linked_lists.o: linked_lists.c ../de_LinkedList.h
	gcc -std=c99 -Wall -Werror -c linked_lists.c

de_LinkedList.o: ../de_LinkedList.c ../de_LinkedList.h
	gcc -std=c99 -Wall -Werror -c ../de_LinkedList.c

clean:
	-rm *.o linked_lists