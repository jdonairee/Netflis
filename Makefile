# nombre del ejecutable 
TARGET = main

# buscar todos los .cpp menos los test
SOURCES = $(filter-out test%.cpp, $(wildcard *.cpp))

# Regla principal
$(TARGET): $(SOURCES)
	$(CXX) $(SOURCES) -o $(TARGET)

# lIMPIEZA
clean: 
	$(RM) $(TARGET)
