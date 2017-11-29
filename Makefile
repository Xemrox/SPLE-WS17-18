
all: SPLE

clean:
	-rm -f *.o mpi-pi cpp11-pi openMP-pi



SPLE.o: main.cpp CRouteCalc.cpp
	c++ -std=c++11 -c $<

SPLE: SPLE.o
	c++ -std=c++11 -o SPLE SPLE.o -pthread

tests: all
	echo -e "\nRunning SPLE";
	./SPLE


