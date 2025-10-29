/*Program to calculate the volume of a sphere
  Code written by Kripa*/

#include<stdio.h>
#include<math.h>

 #define PI 3.14159
float calculate_volume();

float r = 5.0;

void main()
{
	float volume;

	volume = calculate_volume();

	printf("\nVolume = %f\n", volume);




}


float calculate_volume()
{
	float vol;

	vol = (4.0/3.0)*PI*pow(r,3.0);

	return vol;

}
