CC =gcc
CFLAGS =-Wall
OBJECTS =  main.c hashFunction.c hashTableFunctions.c opcodeFunctions.c

firstpass: $(OBJECTS)
        $(CC) $(CFLAGS) $(OBJECTS) -o firstpass

main.o: main.c
        $(CC) $(CFLAGS) -c main.c

%.o: %.c
        $(CC) $(CFLAGS) -c $(OBJECTS)
        
clean:
        rm firstpass
        
