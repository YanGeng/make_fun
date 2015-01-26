edit : main.o shape.o
	g++ -o target/edit target/main.o target/shape.o

shape.o : src/shape.cpp header/shape.h
	g++ -c src/shape.cpp -o target/shape.o

main.o : src/main.cpp header/shape.h
	g++ -c src/main.cpp -o target/main.o

clean :
	rm target/edit target/main.o target/shape.o
