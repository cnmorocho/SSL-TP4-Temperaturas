all: clean compile execute

clean:
	rm -f *.o executable testexe

compile: dep mainfile
	gcc -o executable Conversion.o TablasDeConversion.o

test: testfile dep compiletest
	./testexe

testfile:
	gcc -c ConversionTest.c

compiletest: 
	gcc -o testexe Conversion.o ConversionTest.o

dep:
	gcc -c ./dependencies/Conversion.c

mainfile:
	gcc -c TablasDeConversion.c

execute:
	./executable

