# Example Makefile for Daisy ST7735 display
TARGET = OLED_ST7735
SRCS = OLED_ST7735.cpp
OBJS = $(SRCS:.cpp=.o)

CFLAGS = -I../.. -I../../src/ -O2 -Wall
LDFLAGS = 

all: $(TARGET).bin

$(TARGET).bin: $(OBJS)
	@echo Linking $@
	arm-none-eabi-g++ $(OBJS) $(LDFLAGS) -o $@

%.o: %.cpp
	@echo Compiling $<
	arm-none-eabi-g++ $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *.bin
