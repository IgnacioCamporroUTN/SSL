CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS =
TARGET = ConversionTest

all: $(TARGET)

$(TARGET): Conversion.o TablasDeConversion.o ConversionTest.o
	$(CC) $(LDFLAGS) $^ -o $@

Conversion.o: Conversion.c Conversion.h
	$(CC) $(CFLAGS) -c $< -o $@

TablasDeConversion.o: TablasDeConversion.c TablasDeConversion.h Conversion.h
	$(CC) $(CFLAGS) -c $< -o $@

ConversionTest.o: ConversionTest.c Conversion.h TablasDeConversion.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) *.o
