main: main.o source/add.o
	gcc -g $^ -o $@
main.o: main.c
	gcc -g -c $^ -o $@ 
source/add.o: source/add.c
	gcc -g -c $^ -o $@
clean:
	rm -rf *.o
