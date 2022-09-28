all: clean compile execute

clean:
	rm -f *.o

compile: dep mainfile
	gcc -o executable Conversion.o TablasDeConversion.o

dep:
	gcc -c ./dependencies/Conversion.c

mainfile:
	gcc -c TablasDeConversion.c

execute:
	./executable

