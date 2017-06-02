All: Calculator_C++

Calculator_C++: Calculator.o Function.o
	g++ Calculator.o Function.o -o Calculator_C++

Calculator.o: Calculator.cpp
	g++ -c Calculator.cpp

Function.o: Function.cpp
	g++ -c Function.cpp

clean:
	rm -rf *.o Calculator_C++


