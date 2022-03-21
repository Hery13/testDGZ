CC=	gcc
CFLAGS=	-g	-O3	-Wall
LDFLAGS=	-lm
EXEC=	mytest
BIN=	main.o

all:$(EXEC)

$(EXEC):$(BIN)
	$(CC)	$(CFLAGS)	$^	-o	$@

%.o:%.c
	$(CC)	$(CFLAGS)	-c	$<	-o	$@


clean:
	rm	-rf	$(EXEC)	*.o