OBJS=main.o cat.o dog.o
TARGET=animal.out

all: $(TARGET)

clean:
	rm -f *.out
	rm -f ${TARGET}

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

main.o: cat.h dog.h main.cpp
cat.o: cat.h cat.cpp
dog.o: dog.h dog.cpp