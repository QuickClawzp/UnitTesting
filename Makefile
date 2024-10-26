# Compiler to use for building
CXX = g++

# Directory for main source code
SRC_DIR = src

# Directory for test code
TEST_DIR = tests

# Rule to build and run the main program
run: $(SRC_DIR)/main.cpp
	$(CXX) $(SRC_DIR)/main.cpp -o main_program  # Compile main program
	./main_program  # Run main program

# Rule to build and run the test harness
test: $(SRC_DIR)/main.cpp $(TEST_DIR)/test_add.cpp
	$(CXX) $(TEST_DIR)/test_add.cpp -o test_program  # Compile test harness
	./test_program  # Run test harness

