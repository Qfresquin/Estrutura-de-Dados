 #include<stdio.h>
#include<string.h>

struct Cliente{
	
	char nome[100], sexo[3];
	
	void Cliente1(){
		
		strcpy(nome,"");
		strcpy(sexo,"");
	}
	void ler(){
		
		scanf("%s %s", nome, sexo);
	}
	void mostrarCliente(){
		
		printf("Nome: %s\nSexo: %s\n", nome, sexo);
	}
};

struct dias{
	
	int dia, mes, ano, idade, idadeCliente[50];
	Cliente cc, salvarCliente[50];
	
	void dias1(){
		
		dia = 0;
		mes = 0;
		ano = 0;
		idade = 0;
	}
	void lerdias(){
		
		scanf("%d/%d/%d", &dia, &mes, &ano);
		calcularIdade();
	}
	void mostrardias(int i){
		
		printf("Idade: %d\n", idadeCliente[i]);
	}
	void calcularIdade(){
		
		idade = 2022 - ano;
		if(mes == 1){
			
			idade = idade + 1;
		}
		else if(mes == 2){
			
			if(dia<=13){
				
				idade = idade + 1;
			}
		}
	}
	void novoCliente(int i){
			
		printf("Insira o Nome e o Sexo (M ou F) do Cliente: \n");
		salvarCliente[i].ler();
		printf("\nInsira a dias de nascimento do Cliente: (DD/MM/AAAA)\n");
		lerdias();
		idadeCliente[i]  = idade;
	}
	void mostrarClientes(int i){
		
		salvarCliente[i].mostrarCliente();
		mostrardias(i);
	}
};

int main(){
	
	int parar = 0, opcao, parar2 = 0, contador = 0;
	dias dat;
	
	while(parar == 0){
		
		printf("Selecione uma opcao:\n1. Cadastrar Cliente\n2. Listar Clientes\n\n");
		scanf("%d", &opcao);		
		
		switch(opcao){
			
			case 1:
				
				dat.novoCliente(contador);
				contador++;
				
				break;
			case 2:
				
				for(int i = 0; i < contador; i++){
						
					dat.mostrarClientes(i);
						
					if(i == 49){
							
						parar = 1;
					}
				}	
					break;
				}
		}
	}

