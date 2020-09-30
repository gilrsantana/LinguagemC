/*
 * 26. Faça um programa que inicialmente leia a quantidade de produtos de uma loja. 
 * A seguir, o programa deverá ler as seguintes informações de cada produto: código do produto, 
 * quantidade anterior em estoque, quantidade vendida e preço unitário. 
 * O programa deverá ler, também, para o produto importado, a cotação do dólar. 
 * O código do produto possui a seguinte formação: TXXX, onde T representa o tipo (1 – nacional, 
 * 2 – importado) e XXX o número seqüencial. 
 * O programa deverá exibir para cada produto: quantidade atual em estoque, valor atual em estoque em reais
 * e situação do produto.
 * Ao final, o programa deverá exibir a quantidade de produtos importados diferentes e o menor valor
 * atual em estoque em reais. 
 * Faça as seguintes funções:
 * a. le_codigo: esta função deverá ler o código do produto e retornar o tipo (valor inteiro).
 * b. converte_real: esta função deverá receber o preço unitário, a cotação do dólar e a quantidade
 * atual em estoque e retornar o valor atual em estoque em reais.
 * c. descobre_situacao: esta função deverá receber a quantidade atual em estoque e a quantidade
 * vendida e exibir a situação. A situação pode ser:
 *  estoque inconsistente: caso a quantidade atual em estoque seja menor que zero ou
 *  repor estoque: caso a quantidade atual em estoque seja menor que o dobro da quantidade
 * vendida ou
 *  estoque ok.
 */ 