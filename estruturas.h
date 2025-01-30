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