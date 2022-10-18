main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

clean:
	rm -f main.o funcs.o tests a.out main