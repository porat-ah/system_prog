LIBOBJECTS = power.o basicMath.o
LIBOBJECTSO = powers.o basicMaths.o
CC = gcc
CFLAGS = -g -Wall

mymaths: libmyMath.a


mymathd:libmyMath.so


mains: main.o libmyMath.a
	${CC} ${CFLAGS} main.o -lmyMath -L. -o $@


libmyMath.a: $(LIBOBJECTS)
	ar -rcs libmyMath.a $(LIBOBJECTS)


maind: main.o libmyMath.so 
	${CC}  ${CFLAGS} -o maind main.o ./libmyMath.so 


libmyMath.so: ${LIBOBJECTSO}
	${CC} -shared ${LIBOBJECTSO} -o $@


powers.o: power.c
	${CC} ${CFLAGS} -fPIC -c $< -o $@


basicMaths.o: basicMath.c
	${CC} ${CFLAGS} -fPIC -c $< -o $@



%.o: %.c
	${CC} ${CFLAGS} -c $< # -o $@

all : maind mains 
clean: 
	rm mains maind libmyMath.a libmyMath.so *.o 

.PHONY : clean all mymathd mymaths