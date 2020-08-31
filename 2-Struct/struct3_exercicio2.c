#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14
/**
2.	Em um plano cartesiano, um círculo pode ser definido pelas coordenadas 
do centro e pelo raio, enquanto um retângulo de lados paralelos aos eixos 
pode ser definido pelas coordenadas dos vértices superior esquerdo e 
inferior direito. 
Escreva um programa que leia os valores que definem um retângulo e um círculo, 
e verifique qual tem o maior perímetro e qual tem a maior área.
*/
typedef struct {
	int x, y; //coord. do centro do circulo
	int raio;
	int perimetro;
	int area;
} Circulo;

typedef struct {
	int xSuperiorEsq;
	int ySuperiorEsq;
	int xInferiorDir;
	int yInferiorDir;
	int altura;
	int base;
	int perimetro;
	int area;
} Retangulo;

int main() {
	Circulo c;
	Retangulo r;

	printf("Lendo dados de um circulo\n");
	printf("Digite coordenada x do circulo (centro): ");
	scanf("%d", &c.x);
	printf("Digite coordenada y do circulo (centro): ");
	scanf("%d", &c.y);
	printf("Digite o raio do circulo: ");
	scanf("%d", &c.raio);
	//calcular e armazenar o perimetro do circulo
	c.perimetro = 2 * PI * c.raio;

	//calcular e armazenar a area do circulo
	c.area = PI * pow(c.raio, 2);


	printf("Lendo dados de um retangulo\n");
	printf("Digite coordenada x superior esquerda do retangulo: ");
	scanf("%d", &r.xSuperiorEsq);
	printf("Digite coordenada y superior esquerda do retangulo: ");
	scanf("%d", &r.ySuperiorEsq);
	printf("Digite coordenada x inferior direita do retangulo: ");
	scanf("%d", &r.xInferiorDir);
	printf("Digite coordenada y inferior direita do retangulo: ");
	scanf("%d", &r.yInferiorDir);
	//calcular e armazenar altura do retangulo
	r.altura = abs(r.ySuperiorEsq - r.yInferiorDir);

	//calcular e armazenar a base do retangulo
	r.base = abs(r.xSuperiorEsq - r.yInferiorDir);
	
	//calcular e armazenar o perimetro do retangulo
	r.perimetro = (r.altura * 2) + (r.base * 2);

	//calcular e armazenar a area do retangulo
	r.area = r.altura * r.base;

	//comparar qual menor e maior perimetro e area
	if (c.area > r.area) {
		printf("Circulo tem area maior: %d\n", c.area);
	} else {
		printf("Retangulo tem area maior: %d\n", r.area);
	}

	if (c.perimetro > r.perimetro) {
		printf("Circulo tem perimetro maior: %d\n", c.perimetro);
	} else {
		printf("Retangulo tem perimetro maior: %d\n", r.perimetro);
	}
	return 1;

}








