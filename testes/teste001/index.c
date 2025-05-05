//Mesmo que eu tenha saido da escola quero continuar fazendo as atividades

#include <stdio.h> 
#include <stdlib.h>

int main() {
    int senha;
    int login;
    int tentativas = 3; 
    int menu = 0; 
    int dinheiro = 800;
    int depositar;
    int sacar;

    printf("Bem-vindo ao sistema de banco. Vamos prosseguir, insira o seu login e senha:\n");

   
    do {
        printf("Insira seu login: ");
        scanf("%d", &login);
        printf("Insira sua senha: ");
        scanf("%d", &senha);

        
        if (login != 1234 || senha != 4321) {
            tentativas -= 1; 
            system("cls"); 
            printf("Acesso negado. Tentativas restantes: %d\n", tentativas);
        } else {
            break;  
        }

    } while (tentativas > 0); 

    
    if (tentativas == 0) {
        printf("Voce excedeu o numero de tentativas.\n");
        return 0; 
    }

    printf("Voce esta logado.\n");

   
    do {
        printf("O seu saldo e de %d reais\n", dinheiro);
        printf("[1] Sacar\n");
        printf("[2] Depositar\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1: 
                printf("Quanto deseja sacar?\n");
                scanf("%d", &sacar);
                if (sacar <= dinheiro) {
                    dinheiro -= sacar;
                    printf("Saque efetuado. Saldo atual: %d reais\n", dinheiro);
                } else {
                    printf("Saldo insuficiente.\n");
                }
                break;

            case 2: 
                printf("Quanto dinheiro deseja depositar?\n");
                scanf("%d", &depositar);
                dinheiro += depositar;
                printf("Deposito efetuado. Saldo atual: %d reais\n", dinheiro);
                break;

            case 3: 
                printf("Saindo do sistema...\n");
                break;

            default: 
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }

    } while (menu != 3); 

    return 0;
}
