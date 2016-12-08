obj=main.o ex3.o ex2.o
CFLAGS=-Wall -g

edit : $(obj)
	gcc -o edit $(obj)
main.o:main.c main.h
	gcc -c $(CFLAGS) main.c
ex3.o:ex3.c ex3.h
	gcc -c $(CFLAGS) ex3.c
ex2.o:ex2.c ex2.h
	gcc -c $(CFLAGS) ex2.c
.PHONY:clean
clean:
	rm -f *.o edit
	
