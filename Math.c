#include <stdio.h>
#include <math.h>

int main() {

    double valorProduto;
    double valorQuantidade;
    double valorDespesas;
    double valorTotal1;
    double valorTotal2;
    double diferenca;
    double valorProdutoCerto;
    double valorTotalProduto;
    double valorTotalCerto;
    int menu = 1;

    while(menu == 1){
    printf("\n        #### Menu ####\n[1] Calculo de Produto Unitario\n[2] SAIR\n");
    scanf("%d", &menu);

    switch (menu){
    case 1:
        printf("\nDigite o valor do Produto:\n");
        scanf("%lf", &valorProduto);
        while (getchar() != '\n');

        printf("Digite a Quantidade:\n");
        scanf("%lf", &valorQuantidade);
        while (getchar() != '\n');

        printf("Digite o valor das despesas:\n");
        scanf("%lf", &valorDespesas);
        while (getchar() != '\n');

        printf("Digite o valor total:\n");
        scanf("%lf", &valorTotal1);
        while (getchar() != '\n');

        valorTotalProduto = valorProduto * valorQuantidade;
        valorTotal2 = valorTotalProduto + (valorDespesas * valorQuantidade);
        diferenca = valorTotal2 - valorTotal1;
        valorTotalCerto = valorTotalProduto - diferenca;

        valorProdutoCerto = round((valorTotalCerto / valorQuantidade) * 100) / 100;

    printf("\n|Valor total do produto: %.7lf\n|Valor Total Errado: %.7lf\n|Valor de diferenca: %.7lf\n|Valor total do produto certo:  %.7lf\n|VALOR CORRETO DO PRODUTO UNITARIO %.2lf\n", valorTotalProduto, valorTotal2, diferenca, valorTotalCerto, valorProdutoCerto);
    
    break;
    case 2:
        printf("Aplicacao Encerrada");
    break;
    default:
        printf("Escolha outra opção!");
        break;
    }

    }
    return 0;
}
