all: pi.cpp
	g++ -o pi pi.cpp

clean: $(RM) myprog
