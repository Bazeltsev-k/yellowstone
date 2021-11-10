CC=g++ --std=c++20 -O2
SOURCES=main.cpp classes/controller.cpp classes/simple_window.cpp
EXECUTABLE=yellowstone
LDFLAGS=-lglfw -lvulkan -ldl -lpthread

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): main.cpp
	$(CC) -o $(EXECUTABLE) $(SOURCES) $(LDFLAGS)

# VulkanTest: main.cpp
# 	$(CC) -o VulkanTest main.cpp $(LDFLAGS)

# test: VulkanTest
# 	./VulkanTest

clean:
	rm -rf *.o
	rm -rf **/*.o
