sim:  extra.o
		g++ -g -Wall  extra.o -o sim

extra.o: extra.cpp 
		g++ -c -Wall extra.cpp

run: sim 
		./sim

clean:
		rm *.o
			rm sim

debug: sim
		gdb sim
