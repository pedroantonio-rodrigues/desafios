#include<iostream>

float massa = 20;
float forcaResultante = 220;


float calculoAceleracao(){
	
	return (forcaResultante / massa);
}

int main(){
	
	std::cout << "resultado: " << (calculoAceleracao() * massa);
}