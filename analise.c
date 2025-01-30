/*
File: analise.c
Tema: Gestão de Auto-Peças
Nome: João Domingos Dala, 35356
Data: 16/02/2025
*/
/*
1. Objectivo do Projecto:
Implementar um projecto capaz de fazer a gestão de uma oficina de auto-peças.

2.  Menus
    2.1 - MENU PRINCIPAL
        2.1.1 - MENU PRODUTO 
            1 - NOVO PRODUTO
	        2 - EDITAR PRODUTO
	        3 - ELIMINAR PRODUTO
	        4 - LISTAR PRODUTO
	        5 - PESQUISAR PRODUTO
	        6 - VOLTAR
        2.1.2 - MENU COMPRAS
            2.1.2.1 - EFECTUAR UMA COMPRA
            2.1.2.2 - HISTÓRICO DE COMPRAS
        2.1.3 - MENU ESTOQUE
            2.1.3.1 - EXIBIR PRODUTOS
            2.1.3.2 - ADICIONAR PRODUTOS

3.  Entidades
        typedef struct
{
        int dia, mes, ano;

} DATE;

typedef struct
{
        int idProduto;
        char nomeProduto[20];
        float precocompraProduto, precovendaProduto, qtdProduto;
        DATE dataregistro;
} PRODUTO;
typedef struct
{
        int idEntrada, idProduto;
        DATE dataEntrada;
        float qtdEntrada, precocompraProduto;
        char funcionario[20];
        DATE entrada;
} ENTRADA;
typedef struct
{
        int idSaida, idProduto;
        DATE dataSaida;
        float qtdSaida, precovendaProduto;
        char funcionario[20];
        DATE saida;
} SAIDA;
typedef struct {
    int idProduto;
    char nomeProduto[20];
    float quantidadeComprada;
    DATE dataCompra;
} HISTORICO_COMPRA;


4.  Ficheiros de dados
PRODUTO.DAT
ENTRADA.DAT
SAIDA.DAT

5.  Implementação
Linguagem C, Visual Studio Code
*/