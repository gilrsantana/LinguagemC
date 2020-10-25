/*
 * Uma estufa de flores é monitorada por 25 sensores que registram a temperatura e umidade.  
 * Estes sensores enviam a temperatura e o grau de umidade em determinados horários. 
 * Faça um programa, utilizando a função abaixo, que leia os registros de cada sensor 
 * (o horário (h e m), a temperatura e o grau de umidade - 
 * término dos registros de um sensor: hora = = -1) e apresente, para cada sensor: 
 * (1) a menor  temperatura  e em que horário ocorreu 
 * (2) o menor  grau de umidade e em que horário ocorreu
 * 
 * No final  o programa deve mostrar qual sensor registrou a menor temperatura e qual sensor 
 * registrou o menor grau de umidade 
 * 
 * a) Faça a função um_sensor que receba como parâmetros o endereço de duas variáveis reais. 
 * Esta função deverá ler os dados de um sensor, exibir  a menor  temperatura  e em que horário 
 * ocorreu, o menor  grau de umidade e em que horário ocorreu e armazenar, nas variáveis cujos 
 * endereços são fornecidos, a menor temperatura e o menor grau de umidade registrados por ele.
 * Protótipo da função: void um_sensor (float *menortemp, float *menorumidade);
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SENSOR 25

void aSensor(float *lowTemp, float *lowHumid);

int main(void){
	float lowTemp=-1.0, lowHumid=-1.0, minTemp=-1, minHu=-1;
	int count=1, lowTempSensor, lowHumidSensor;
	
	
	
	while(count <= SENSOR){
		printf("\n**** Sensor %i ****\n", count);
		aSensor(&lowTemp, &lowHumid);
		if(minTemp == -1){
			minTemp = lowTemp;
		}
		if(minHu == -1){
			minHu = lowHumid;
			
		}
		if(lowTemp < minTemp){
			minTemp = lowTemp;
			lowTempSensor = count;
		}
		if(lowHumid < minHu){
			minHu = lowHumid;
			lowHumidSensor = count;
		}
		count++;
	}
	printf("\n");
	printf("Sensor with lowest temperature .. %2i  -- %2.1f °C\n", lowTempSensor, minTemp);
	printf("Sensor with lowest humidity ..... %2i  -- %2.1f °C\n", lowHumidSensor, minHu);
	
	return 0;
}

void aSensor(float *lowTemp, float *lowHumid){
	int hour, minute, random, hourRefTemp, minuteRefTemp, hourRefHu, minuteRefHu;
	float temp, humidity;
		
	srand(time(NULL));
	
	do{
		hour = rand()%25;
		minute = rand()%61;
		temp = rand()%31;
		humidity = rand()%81;
		if((*lowTemp) == -1){
			(*lowTemp) = temp;
		}
		if((*lowHumid) == -1){
			(*lowHumid) = humidity;
		}
		if(temp < (*lowTemp)){
			(*lowTemp)=temp;
			hourRefTemp = hour;
			minuteRefTemp = minute;
		}
		if(humidity < (*lowHumid)){
			(*lowHumid)=humidity;
			hourRefHu = hour;
			minuteRefHu = minute;
		}
		
		random = rand()%25;
		hour = random - hour;
		if(hour < 0){
			hour = -1;
		}
		
	}while(hour != -1);
	printf("Lowest temperature: %2.1f at %2ih %i2min\n", (*lowTemp), hourRefTemp, minuteRefTemp);
	printf("Lowest humidity: %2.1f at %2ih %i2min\n", (*lowHumid), hourRefHu, minuteRefHu);
	
	return;
}
