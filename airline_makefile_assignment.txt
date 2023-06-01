#defining macros
CC = g++ #compiler for compiling C++ files
CFLAGS = -std=c++11 -Wall #-std=c++11 specifies the compiler version (11)  
#-Wall flag generates compiler warnings if an issue occurs


#source and build directory
SRC_DIR = src
BUILD_DIR = bin

# Target executable
TARGET = $(BUILD_DIR)/airline

#getting all source files and corresponding object files
#wildcard functions gives all (*) files in the src directory
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
#patsubst  function replaces  $(SRC_DIR)/%.cpp pattern with $(BUILD_DIR)/%.o in each string of the $(SRCS) list.
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

#defining phony targets
.PHONY: all clean run

#builds the target executable
all: $(TARGET)

#Rule to build target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 
# -o flag is used to specify name of output file/ executable
# $@ refers to the target name of the rule
# $^ refers to list of dependencies of the target



#Rule to compile each source file into a object file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
# -c flag instructs compiler to perform compilation without linking
# -o specifes the name of executable
# $@ refers to target name
# $< represents the first dependency of the target



#cleans the build directory and remove target executable
#rm -rf force removes files/folders.
clean:
	rm -rf $(BUILD_DIR)/* $(TARGET) 

# rule for running the target executable
run: $(TARGET)
	$(TARGET)
