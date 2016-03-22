equc: main.o equ.o
	gcc -o equc main.o equ.o -lm

main.o: main.c
	gcc -Wall -c main.c

equ.o: equ.c
	gcc -Wall -c equ.c

.PHONY: clean
clean:
	rm -f equc *.o