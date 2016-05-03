
output: main.o media_e_desvio_padrao.o
	g++ main.o media_e_desvio_padrao.o -o media_e_desvio_padrao

main.o: main.cpp
	g++ -c main.cpp

media_e_desvio_padrao.o: media_e_desvio_padrao.cpp media_e_desvio_padrao.h
	g++ -c media_e_desvio_padrao.cpp

clean:
	rm *.o media_e_desvio_padrao