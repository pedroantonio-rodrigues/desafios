#include<iostream>

int main(){
	
	float metros = 0;
	
	std::cout << "digite um valor em metros que gostaria ser convertido: ";
	std::cin >> metros; 
	
	std::cout << "convertido em polegadas: " << metros * 39.37;
	std::cout << "\nconvertido em pes: " << metros * 3.281;
	std::cout << "\nconvertido em jardas: " << metros * 1.094;
	std::cout << "\nconvertido em milhas: " << metros / 1609;
	std::cout << "\nconvertido em centimetros: " << metros * 100;
	std::cout << "\nconvertido em quilometros: " << metros / 1000;
	
	return 0;
	
}