#include <stdio.h>

int main() {

    int carta = "1";
    char estado[02]; "SP";
    char codigo[03]; "A01";
    char cidade[9]; "São Paulo";
    int população[05]; "1.774";
    float area[07]; "434,892";
    float pib[13]; "828980607,731";
    int pts[02]; "50";

    int CARTA = "2";
    char ESTADO[02]; "PR";
    char CODIGO[03]; "C01";
    char CIDADE[8]; "Curitiba";
    int POPULAÇÃO[06]; "11.451";
    float AREA[9]; "1.521,202";
    float PIB[11]; "88308728,40";
    int PTS[02]; "37";

    printf("Digite o número da carta : ");
    scanf("%d", carta, CARTA);

    printf("Carta: %d\n", &carta, &CARTA);
    printf("Estado: %s\n", &estado, &ESTADO);
    printf("Codigo: %a\n", &codigo, &CODIGO);
    printf("Cidade: %s\n", &cidade, &CIDADE);
    printf("População: %d\n", &população, &POPULAÇÃO);
    printf("Área: %d\n km²", &area, &AREA);
    printf("PIB: R$ %d\n milhões", &pib, &PIB);
    printf("Pontos Turisticos: %d", &pts, &PTS);
    return 0;

}