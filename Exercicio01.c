#include <stdio.h>
int main(){
    int idade;
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    if(idade>=0 && idade<=12){
        printf("Criança\n");
    }
    else if(idade>=13 && idade<=17){
        printf("Adolescente\n");
    }
    else if(idade>=18 && idade<=59){
        printf("Adulto\n");
    }
    else if(idade>=60){
        printf("Idoso\n");
    }
    else {
        printf("Idade inválida\n");
    }
    return 0;
}
    
