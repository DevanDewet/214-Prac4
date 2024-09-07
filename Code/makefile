# Compiler flags
CXX = g++
CXXFLAGS = -std=c++11

# Object files
ofiles = Main.o \
         Barn.o ExtraBarn.o CropField.o FertilizedField.o FloodedSoil.o FruitfulSoil.o DrySoil.o \
         FarmUnit.o Decorator.o DeliveryTruck.o FertilizeTruck.o \
         BreadthFirstFarmIterator.o DepthFirstFarmIterator.o

# Target for the executable
main: $(ofiles)
	$(CXX) $(CXXFLAGS) $(ofiles) -o main
	chmod +x main  # Add execute permission

# Rules for generating object files
Main.o: Main.cpp Barn.h ExtraBarn.h CropField.h FertilizedField.h FloodedSoil.h FruitfulSoil.h DrySoil.h \
         FarmUnit.h Decorator.h DeliveryTruck.h FertilizeTruck.h \
         BreadthFirstFarmIterator.h DepthFirstFarmIterator.h
	$(CXX) $(CXXFLAGS) -c Main.cpp -o Main.o

Barn.o: Barn.cpp Barn.h
	$(CXX) $(CXXFLAGS) -c Barn.cpp -o Barn.o

ExtraBarn.o: ExtraBarn.cpp ExtraBarn.h
	$(CXX) $(CXXFLAGS) -c ExtraBarn.cpp -o ExtraBarn.o

CropField.o: CropField.cpp CropField.h
	$(CXX) $(CXXFLAGS) -c CropField.cpp -o CropField.o

FertilizedField.o: FertilizedField.cpp FertilizedField.h
	$(CXX) $(CXXFLAGS) -c FertilizedField.cpp -o FertilizedField.o

FloodedSoil.o: FloodedSoil.cpp FloodedSoil.h
	$(CXX) $(CXXFLAGS) -c FloodedSoil.cpp -o FloodedSoil.o

FruitfulSoil.o: FruitfulSoil.cpp FruitfulSoil.h
	$(CXX) $(CXXFLAGS) -c FruitfulSoil.cpp -o FruitfulSoil.o

DrySoil.o: DrySoil.cpp DrySoil.h
	$(CXX) $(CXXFLAGS) -c DrySoil.cpp -o DrySoil.o

FarmUnit.o: FarmUnit.cpp FarmUnit.h
	$(CXX) $(CXXFLAGS) -c FarmUnit.cpp -o FarmUnit.o

Decorator.o: Decorator.cpp Decorator.h
	$(CXX) $(CXXFLAGS) -c Decorator.cpp -o Decorator.o

DeliveryTruck.o: DeliveryTruck.cpp DeliveryTruck.h
	$(CXX) $(CXXFLAGS) -c DeliveryTruck.cpp -o DeliveryTruck.o

FertilizeTruck.o: FertilizeTruck.cpp FertilizeTruck.h
	$(CXX) $(CXXFLAGS) -c FertilizeTruck.cpp -o FertilizeTruck.o

BreadthFirstFarmIterator.o: BreadthFirstFarmIterator.cpp BreadthFirstFarmIterator.h
	$(CXX) $(CXXFLAGS) -c BreadthFirstFarmIterator.cpp -o BreadthFirstFarmIterator.o

DepthFirstFarmIterator.o: DepthFirstFarmIterator.cpp DepthFirstFarmIterator.h
	$(CXX) $(CXXFLAGS) -c DepthFirstFarmIterator.cpp -o DepthFirstFarmIterator.o

# Run the program
run: main
	./main

# Run the program with Valgrind
valgrind: main
	valgrind --leak-check=full --track-origins=yes ./main

# Clean up
clean:
	rm -f *.o main
