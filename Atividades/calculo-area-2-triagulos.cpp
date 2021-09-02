#include<iostream>

float ladoA1 = 0;
float ladoB1 = 0;
float ladoC1 = 0;

float ladoA2 = 0;
float ladoB2 = 0;
float ladoC2 = 0;

float perimetro1(){
	
	return ((ladoA1 + ladoB1 + ladoC1) / 2);
}

float perimetro2(){
	
	return ((ladoA2 + ladoB2 + ladoC2) / 2);
}

int main(){


std::cout << "digite o lado A do triangulo 1: ";
std::cin >> ladoA1;

std::cout << "digite o lado B do triangulo 1: ";
std::cin >> ladoB1;

std::cout << "digite o lado C do triangulo 1: ";
std::cin >> ladoC1;

std::cout << "digite o lado A do triangulo 2: ";
std::cin >> ladoA2;

std::cout << "digite o lado B do triangulo 2: ";
std::cin >> ladoB2;

std::cout << "digite o lado C do triangulo 2: ";
std::cin >> ladoC2;

if (perimetro1() > perimetro2()){
	
	std::cout << "o triangulo 1 e maior que o triangulo 2 e sua area e: " << perimetro1(); 
}else {
	std::cout << "o triangulo 2 e maior que o triangulo 1 e sua area e: " << perimetro2();
}

return 0;

}