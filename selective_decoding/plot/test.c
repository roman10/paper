#include <stdio.h>

static double T; /* Imaginary part of T matrix */
static double x; /* Real part of Energy */
static double y; /* Imaginary part of Energy */
static double G; /*Resonance Peak width */
static double ER;/* Resonance Peak Energy */

void main()
{
G = 120.;
ER=180.;
for(x=150.;x<=200.;x=x+1.){
for(y=-70.;y<=-50.;y=y+0.5){

/* Plotting T as a function of x and y */
T = (G/2.)*(y+(G/2.))/(ER*ER - 2.*ER*x + G*y + (G*G/4.) + x*x + y*y);
printf("%lf\n", T); /*Printing out T to standard output*/
}
printf("\n"); /* printing a newline after every column(this part is crutial) */
}
}
