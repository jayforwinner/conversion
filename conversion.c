#include "conversion.h"
/*********************************************************************************/

uint8_t str[7];
/*********************************************************************************/
void intToString(uint16_t number)
{
	uint8_t temp;
	uint8_t j = 0, i = 0;
	uint16_t result;
	
	result = number;

	do
	{
		str[j] = (result % 10) + 0x30;
		j++;
	} while((result = result / 10) != 0);

	str[j] = '\0';
	j=0;
	
	while(str[j]!='\0')
	{
		j++;
	}

	for(i=0,j=j-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
/*********************************************************************************/
