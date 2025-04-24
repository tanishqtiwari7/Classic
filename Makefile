# Makefile for Classic Console Application

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I"include"

# Output directories
BIN_DIR = bin
BUILD_DIR = build
BUILD_GAMES_DIR = $(BUILD_DIR)/games
BUILD_MATHS_DIR = $(BUILD_DIR)/maths

# Source files
SRCS = src/main.cpp \
       src/user_input.cpp \
       src/username.cpp \
       src/games/games.cpp \
       src/maths/mathematics.cpp

# Object files
OBJS = $(patsubst src/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Dependency files
DEPS = $(OBJS:.o=.d)

# Target executable
TARGET = $(BIN_DIR)/classic_app.exe

# Add dependency generation to CXXFLAGS
CXXFLAGS += -MMD -MP

# Force rebuild whenever header files change
$(BUILD_DIR)/%.o: include/%.h

# Main target
all: dirs $(TARGET)

# Create directories
dirs:
	@if not exist "$(BIN_DIR)" mkdir "$(BIN_DIR)"
	@if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
	@if not exist "$(BUILD_GAMES_DIR)" mkdir "$(BUILD_GAMES_DIR)"
	@if not exist "$(BUILD_MATHS_DIR)" mkdir "$(BUILD_MATHS_DIR)"

# Linking
$(TARGET): $(OBJS)
	@echo Linking $@
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@echo Build successful!
	@echo You can find the executable in $(TARGET)

# Compiling source files with dependency tracking
$(BUILD_DIR)/%.o: src/%.cpp
	@echo Compiling $<
	@if not exist "$(@D)" mkdir "$(@D)"
	@$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean command using Windows command prompt syntax
clean:
	@echo Cleaning project...
	-@del /Q "$(BUILD_DIR)\*.o" 2>NUL
	-@del /Q "$(BUILD_DIR)\*.d" 2>NUL
	-@del /Q "$(BUILD_GAMES_DIR)\*.o" 2>NUL
	-@del /Q "$(BUILD_GAMES_DIR)\*.d" 2>NUL
	-@del /Q "$(BUILD_MATHS_DIR)\*.o" 2>NUL
	-@del /Q "$(BUILD_MATHS_DIR)\*.d" 2>NUL
	-@del /Q "$(TARGET)" 2>NUL
	@echo Clean complete!

# Rebuild - forces a complete rebuild
rebuild: clean all

# Include dependency files
-include $(DEPS)

# Print variables for debugging
debug:
	@echo SRCS: $(SRCS)
	@echo OBJS: $(OBJS)
	@echo DEPS: $(DEPS)

# Force rebuild by modifying timestamp
forcebuild:
	@echo Forcing rebuild by touching source files...
	@copy /b src\*.cpp+,, src\*.cpp >NUL
	@copy /b src\games\*.cpp+,, src\games\*.cpp >NUL
	@copy /b src\maths\*.cpp+,, src\maths\*.cpp >NUL

.PHONY: all clean rebuild dirs debug forcebuild