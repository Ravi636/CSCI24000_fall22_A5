sim:  main.o
	g++ -g -Wall  main.o -o sim

main.o: main.cpp 
	g++ -c -Wall main.cpp

run: sim 
	./sim

clean:
	rm *.o
	rm sim

debug: sim
	gdb sim
