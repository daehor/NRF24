#include "../include/reg24le1.h" // I/O header file for NRF24LE1
void main()
{
	uint16_t i=0;
	P0 = 0;
	P0DIR = 0;

	while(1){
		P0 ^= 1<<0;//logic high to Port 0
		for(i=0;i<60000;i++)
			nop();
		P0 &= ~1<<0;//logic low to Port 0
		for(i=0;i<60000;i++)
			nop();
	}
}