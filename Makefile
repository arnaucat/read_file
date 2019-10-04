CFLAGS = -c

readfile: read_file.o
	$(CXX) leerfichero.o -o readfile

read_file.o: leerfichero.c
	$(CXX) $(CFLAGS) leerfichero.c

clean:
	$(RM) *.o readfile core

