all: kalkulator0.5.cpp
	g++ -O2 -Wall kalkulator0.5.cpp -o kalkulator0.5

run: all
	./kalkulator0.5

clean:
	rm -f kalkulator0.5	
