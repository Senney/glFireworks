LIBFLAGS=-lX11 -lGL -lGLU
OUTFILE=FireworkSimulator

OBJ = FireworkSimulator.o Firework.o Physics/PhysicsHandler.o Physics/PhysicsRule.o Objects/Object.o\
	Window/Window.o

run: all
	./$(OUTFILE)

fwSim: $(OBJ)
	g++ $(OBJ) $(LIBFLAGS) -o $(OUTFILE)
	
%.o: %.cpp
	g++ -o $@ -c $< $(LIBFLAGS)
	
all: fwSim

clean:
	rm $(OBJ) $(OUTFILE)
	
