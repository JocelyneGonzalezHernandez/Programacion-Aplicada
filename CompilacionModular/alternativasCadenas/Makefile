#Programa: Alternativas de Funciones strcmp, strlen y strcpy
# Por: Monica Ivette Vergara Mendoza
funcioncadena: principal.o funciones.o
	gcc -o funcioncadena principal.o funciones.o

principal.o: principal.c
	gcc -c principal.c

funciones.o: funciones.c
	gcc -c funciones.c

clean:
	rm *.o
