#include<iostream>

float n1 = 0;
float n2 = 0;

float adicao (){
	
	return (n1 + n2);
}

float subtracao(){
	
	return (n1 - n2);
}

float multiplicacao(){
	
	return (n1 * n2);
}

float divisao(){
	
	return (n1 / n2);
}

int main(){
	
	int operacao = 0; 
	
	
	std::cout << "digite um o primeiro numero: ";
	std::cin >> n1;
	
	std::cout << "digite o segundo numero: ";
	std::cin >> n2;
	
	std::cout << "agora escolha uma opcao de operacao \n1-adicao \n2-subtracao \n3-multiplicacao \n4-divisao \n ";
	std::cin >> operacao;
	
	switch(operacao){
		
		case 1:
			std::cout << "resultado: " << adicao();
			break;
			
		case 2:
			std::cout << "resultado: " << subtracao();
			break;
			
		case 3:
			std::cout << "resultado: " << multiplicacao();
			break;
			
		case 4:
			std::cout << "resultado: " << divisao();
			break;
			 
		default: 
		std::cout << "opcao selecionada nao existe: ";
		
	}
	
	
	return 0;
}