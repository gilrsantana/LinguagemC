#include <stdio.h>
#include <locale.h>
#include <math.h>

float calculaAreaRetangulo(float lado1, float lado2){
    float area = lado1 * lado2;

    return area;
}

float calculaPerimetroRetangulo(float lado1, float lado2){
    float perimetro = (lado1 * 2)+(lado2 * 2);

    return perimetro;
}

float calculaVolumeCaixa(float aresta1, float aresta2, float aresta3){
    float volume = aresta1 * aresta2 * aresta3;

    return volume;
}

float calculaAreaCirculo(float medida){
    float area = M_PI * pow(medida,2);
    
    return area;
}

float calculaPerimetroCirculo(float medida){
    float perimetro = M_PI * 2 * medida;
    
    return perimetro;
}

float calculaVolumeCilindro(float medRaio, float medAltura){
    float volume = M_PI * 2 * medRaio * medAltura;
    
    return volume;
}

float calculaHipotenusa(float medida1, float medida2){
    float hipotenusa = sqrt(pow(medida1,2) + pow(medida2,2));
    
    return hipotenusa;
}

float calculaDistancia(float medidaA1, float medidaA2, float medidaB1, float medidaB2){
    float medida = sqrt(pow((medidaB1 - medidaA1),2) + pow((medidaB2 - medidaA2),2));
    
    return medida;
}

float calculaPerimetroTriangulo(float medida1, float medida2, float medida3){
    float medida = medida1 + medida2 + medida3;
    
    return medida;
}

float calculaAreaTriangulo(float medida1, float medida2, float medida3){
    float medida;
    float sP = calculaSemiPerimetro(medida1, medida2, medida3);
    medida = sqrt( sP * (sP - medida1)*(sP - medida2)*(sP - medida3) );
    
    return medida;
}

int main(void){
    float retangulo1, retangulo2, retangulo3, triangulo, areaTotal;
    float a, b, c, d, e, f;

    retangulo1 = calculaAreaRetangulo(a, b);
    retangulo2 = calculaAreaRetangulo(c, d);
    f = calculaHipotenusa(a, d);

    return 0;
}