Main:
	g++ -c *.cpp
	g++ -o Main *.o

run: Main
	./Main

clean:
	rm *.o Main