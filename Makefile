
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -pedantic
FOUNDATIONS_TARGET := foundations_demo
ENCAPSULATION_TARGET := encapsulation_demo
DERIVED_SHAPES_TARGET := derived_shapes_demo
LEGACY_TARGET := point_app

FOUNDATIONS_SRC := foundations/main.cpp foundations/point.cpp
ENCAPSULATION_SRC := encapsulation/main.cpp encapsulation/point.cpp encapsulation/polygon.cpp
DERIVED_SHAPES_SRC := derived_shapes/main.cpp derived_shapes/point.cpp derived_shapes/triangle.cpp derived_shapes/rectangle.cpp

.PHONY: all run run-foundations run-encapsulation run-derived-shapes clean

all: $(FOUNDATIONS_TARGET) $(ENCAPSULATION_TARGET) $(DERIVED_SHAPES_TARGET)

$(FOUNDATIONS_TARGET): $(FOUNDATIONS_SRC)
	$(CXX) $(CXXFLAGS) $(FOUNDATIONS_SRC) -o $(FOUNDATIONS_TARGET)

$(ENCAPSULATION_TARGET): $(ENCAPSULATION_SRC)
	$(CXX) $(CXXFLAGS) $(ENCAPSULATION_SRC) -o $(ENCAPSULATION_TARGET)

$(DERIVED_SHAPES_TARGET): $(DERIVED_SHAPES_SRC)
	$(CXX) $(CXXFLAGS) $(DERIVED_SHAPES_SRC) -o $(DERIVED_SHAPES_TARGET)

run: run-foundations run-encapsulation run-derived-shapes

run-foundations: $(FOUNDATIONS_TARGET)
	./$(FOUNDATIONS_TARGET)

run-encapsulation: $(ENCAPSULATION_TARGET)
	./$(ENCAPSULATION_TARGET)

run-derived-shapes: $(DERIVED_SHAPES_TARGET)
	./$(DERIVED_SHAPES_TARGET)

clean:
	rm -f $(FOUNDATIONS_TARGET) $(ENCAPSULATION_TARGET) $(DERIVED_SHAPES_TARGET) $(LEGACY_TARGET) point *_demo