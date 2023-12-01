#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int i, j, ok, ok1, opcao,ok2;
char login[50], senha[50], password[50];

void menu(void);
void Cadastro(void);
void validandologin(void);

//declarando struct
typedef  struct {
    char nome[100];
    char login[100];
    char senha[100];
}cadastro;

cadastro cad[50];

int main() {
    setlocale(LC_ALL,"Portuguese" );
    do {
        menu();
        switch (opcao) {
            case 1:
                Cadastro();
                break;
            case 2:
                validandologin();
                break;
        }


    }while(opcao != 3);
}

//função exibir o menu
void menu(){
    printf("\n\n\n\n");
    printf("                                                    BEM-VINDO AO MENU               \n");
    printf("                                        *******************************************\n");
    printf("                                        *        1- cadastrar usuario             *\n");
    printf("                                        *        2- fazer login                   *\n");
    printf("                                        *            3-sair                       *\n");
    printf("                                        *******************************************\n");
    printf("Digite uma opção:\n");
    scanf("%d",&opcao);
    fflush(stdin);

    system("cls");
}

//função para fazer cadastro
void Cadastro(){

    printf("Digite seu nome:\n");
    gets(cad[i].nome);
    fflush(stdin);

    system("cls");

    printf("Digite um login:\n");
    gets(login);
    fflush(stdin);

    printf("Confirme o login:\n");
    gets(cad[i].login);
    fflush(stdin);

    system("cls");

    ok = strcmp(login, cad[i].login);

    if (ok == 0) {

        printf("Digite uma senha:\n");
        gets(senha);
        fflush(stdin);

        printf("Confirme a senha:\n");
        gets(cad[i].senha);
        fflush(stdin);

        system("cls");

        ok= strcmp(senha, cad[i].senha);

        if (ok == 0) {

            i = i + 1;
            printf("\n\nUsuario cadastrado!!\n");

            system("pause");

            system("cls");
        } else {

            i = i-1;
            printf("AS SENHAS NAO CONCIDEM\n");

            system("pause");

            system("cls");
        }

    } else {

        i = i-1;
        printf("os logins nao concidem\n");

        system("pause");

        system("cls");
    }
}

//função para validar login
void validandologin(){

    j=0;

    printf("Digite o login:\n");
    gets(login);
    fflush(stdin);

    printf("Digite sua senha:\n");
    gets(password);
    fflush(stdin);

    system("cls");

    for(j=0;j<=i;j++) {

        ok1 = strcmp(login, cad[j].login);
        ok2 = strcmp(password, cad[j].senha);

        if (ok1 == 0 && ok2 == 0) {

            printf("\n\nBem vindo!\n");
            printf("%s\n", cad[j].nome);

            j=i;
            ok1= 0;
            ok2 = 0;

            system("pause");

            system("cls");
        }
    }
    if(ok1 != 0 && ok2 != 0 ){
        printf("Login ou senha invalidos !\n");

        system("pause");

        system("cls");

    }

}
//implentar se o login ja é existente na hora do cadastro