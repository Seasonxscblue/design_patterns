ifndef TARGET
TARGET:=design_pattern
endif

WORKSPACE:=$(shell pwd)

SRC:=$(wildcard $(WORKSPACE)/src/*.cc)

OBJS:=$(patsubst %.cc, %.o, $(SRC))

CXXFLAGS:=-I$(WORKSPACE)/include -std=c++23

$(TARGET):$(OBJS)
	$(CXX) $^ -o $@

clean:
	$(RM) $(TARGET) $(OBJS)
.PHONY: clean
