test : main.o FinitState.o
	g++ -o test main.o FinitState.o
main.o:main.cpp
	g++ -c main.cpp
FinitState.o:FinitState.cpp
	g++ -c FinitState.cpp
clean:
	rm test main.o FinitState.o