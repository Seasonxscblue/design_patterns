ifndef TARGET
TARGET:=design_pattern
endif
SRC:=$(wildcard $(shell pwd)/src/*.cc)
OBJS:=$(patsubst %.cc, %.o, $(SRC))
CXXFLAGS:=-I$(shell pwd)/include -I/usr/local/include -std=c++20

$(TARGET):$(OBJS)
	$(CXX) $^ -o $@ $(LIBS)

clean:
	$(RM) $(TARGET) $(OBJS)
.PHONY: clean
