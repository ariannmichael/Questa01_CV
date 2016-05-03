#include <iostream>
#include <new>
#include <math.h>
#include "media_e_desvio_padrao.h"

using namespace std;


void entrada(){
	int n;
	cout << "Entre com o número de variáveis: " << endl;
	cin >> n;
	alocacao(n);
}

void alocacao(int n){
	float resultado_media;
	int* p = new int [n];// alocação de memoria;
	cout << "Entre com os números: " << endl;
	for(int i = 0; i < n; i++){
		cin >> p[i];// preenchendo o array;
	}

	media(n, p);

	delete[] p;	

}

void media(int n,int* p){
	float resultado, soma = 0;

	for(int i = 0; i < n; i++){
		soma += p[i];// encontrando a soma;
	}
	resultado = soma/n;

	cout << "Média: " << resultado << endl;

	desvio_padrao(n, resultado, p);
}

void desvio_padrao(int n, float resultado_media, int* p){
	float termos, desvio;
	for(int i = 0; i < n; i++){
		termos += pow(p[i] - resultado_media, 2);// elevar cada termo ao quadrado
	}
	desvio = sqrt(termos/(n-1));// raiz


	cout << "Desvio Padrão: " << desvio << endl;
}