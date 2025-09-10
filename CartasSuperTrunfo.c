#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main(){

    
    //Variaveis para guardar dados da PRIMEIRA carta
    // --------------------------------------------------------------------------------------------------------------------------------------------------
    char estado[101], codigo_da_carta[101], nome_da_cidade[101];
    int populacao, numero_de_pontos_turisticos; 
    float area_em_km, pib; 


    //Idem para a SEGUNDA carta

    char estado_1[101], codigo_da_carta_1[101], nome_da_cidade_1[101];
    int populacao_1, numero_de_pontos_turisticos_1; 
    float area_em_km_1, pib_1; 

    // handshake com o usuario
    // --------------------------------------------------------------------------------------------------------------------------------------------------
    printf("\n\n *** Bem-vindo ao Jogo Super Trunfo.*** \n * Nivel inicial, cadastrando somente DUAS cartas :) * \n\n");

    printf("Ao entrar com os dados, use como modelo ''Sao_Paulo'' em vez de ''São Paulo'', ''Sao_Joao_da_Boa_Vista'' em vez de ''São João da Boa Vista'', etc:\n");


    // Entrada de dados do usuario
    // --------------------------------------------------------------------------------------------------------------------------------------------------
    /* Entrada da PRIMEIRA carta   */
    printf("Por favor, entre com os dados da primeira carta.\n");

    printf("Entre com o nome do Estado, por exemplo, Rio_de_Janeiro, etc\n <<< ");
    scanf("%s", estado);
    printf("\n");

    printf("Codigo da Carta, que representa o Estado e a cidade, por exem PS01, codigo da carta do Estado `S`ao `P`aulo e a primeira cidade 01.\n <<< ");
    scanf(" %s", codigo_da_carta);
    printf("\n");

    printf("Nome da Cidade, por exemplo, Sao Paulo.\n <<< ");
    scanf(" %s", nome_da_cidade);
    printf("\n");

    printf("Entre com a populacao, por exemplo, 2000000 de pessoas.\n <<< ");
    scanf("%d", &populacao );
    printf("\n");

    printf("Area por exemplo 2000000 kilometros quadrados.\n <<< ");
    scanf("%f", &area_em_km);
    printf("\n");

    printf("Numero de pontos turisticos, por exemplo, 10 lugares.\n <<< ");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("\n");


    /* Entrada da SEGUNDA carta   */

    printf("\n >>>   Por favor, entre com os dados da SEGUNDA carta. \n");

    printf( "Entre com o nome do Estado, por exemplo, Rio_de_Janeiro.\n <<< ");
    scanf("%s", estado_1);
    printf("\n");

    printf("Codigo da Carta, que representa o Estado e a cidade, por exem PS01, codigo da carta do Estado `S`ao `P`aulo e a primeira cidade 01.\n <<< ");
    scanf(" %s", codigo_da_carta_1);
    printf("\n");

    printf("Nome da Cidade, por exemplo Belem_do_Para.\n");
    scanf("%s", nome_da_cidade_1);
    printf("\n");

    printf("Entre com a populacao, por exemplo, 2000000 de pessoas.\n <<< ");
    scanf("%d", &populacao_1 );

    printf("Area por exemplo 2000000 kilometros quadrados.\n <<< ");
    scanf("%f", &area_em_km_1);
    printf("\n");

    printf("Numero de pontos turisticos, por exemplo, 10 lugares.\n <<< ");
    scanf("%d", &numero_de_pontos_turisticos_1);
    printf("\n");


    // print dos dados
    // --------------------------------------------------------------------------------------------------------------------------------------------------

    //print dados da PRIMEIRA carta
    printf("\n");
    printf("Dados de entrada da PRIMEIRA carta.\n");
    printf("Estado ''%s'' \n",estado);
    printf("Codigo da Carta ''%s'', que representa o Estado e a cidade.\n", codigo_da_carta);
    printf("Nome da Cidade ''%s''.\n", nome_da_cidade);

    printf("A populacao ''%d''.\n", populacao);
    printf("Area por kilometros quadrados ''%f''.\n", area_em_km );
    printf("Numero de pontos turisticos ''%d''.\n", numero_de_pontos_turisticos);


    //print dados da SEGUNDA Carta
    printf("\n");
    printf("Dados de entrada da SEGUNDA carta.\n");
    printf("Estado, ''%s'' \n",estado_1);
    printf("Codigo da Carta ''%s'', que representa o Estado e a cidade.\n", codigo_da_carta_1);
    printf("Nome da Cidade ''%s''.\n", nome_da_cidade_1);

    printf("A populacao ''%d''.\n", populacao_1);
    printf("Area por kilometros quadrados ''%f''.\n", area_em_km_1 );
    printf("Numero de pontos turisticos ''%d''.\n", numero_de_pontos_turisticos_1);
     
    printf("* Volte quando quiser, voce eh muito bem-vindo :) *");

return 0;
}
