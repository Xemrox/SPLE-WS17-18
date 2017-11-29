
all: SPLE

clean:
	-rm -f *.o SPLE

SPLE.o:  main.cpp PassengerRouteStrategy.cpp TruckRouteStrategy.cpp DriverInfoSystem.cpp
	c++ -std=c++11 -c $<

SPLE: SPLE.o
	c++ -std=c++11 -o SPLE SPLE.o

tests: all
	echo -e "\nRunning SPLE";
	./SPLE
