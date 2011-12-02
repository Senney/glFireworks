LIBFLAGS=
OUTFILE=FireworkSimulator

OBJ = FireworkSimulator.o Firework.o

run: all
	./$(OUTFILE)

fractalGen: $(OBJ)
	g++ $(OBJ) $(LIBFLAGS) -o $(OUTFILE)
	
%.o: %.cpp
	g++ -o $@ -c $< $(LIBFLAGS)
	
all: fractalGen

clean:
	rm $(OBJ) $(OUTFILE)
