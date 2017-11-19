# main compiler
CXX := g++

TARGET1 := GPIO

all: $(TARGET1)

$(TARGET1): 
	@echo "Compiling C program"
	$(CXX) $(CFLAGS) $(TARGET1).cpp -o $(TARGET1) $(LDFLAGS) -l$(LIB)

clean:
	@rm -rf $(TARGET1) $(TARGET2)
