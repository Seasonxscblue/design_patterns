ifndef TARGET
TARGET:=design_pattern
endif
SRC:=$(wildcard $(shell pwd)/src/*.cpp)
OBJS:=$(patsubst %.cpp, %.o, $(SRC))
CXXFLAGS:=-I$(shell pwd)/include -std=c++17

$(TARGET):$(OBJS)
	$(CXX) $^ -o $@

clean:
	$(RM) $(TARGET) $(OBJS)
.PHONY: clean