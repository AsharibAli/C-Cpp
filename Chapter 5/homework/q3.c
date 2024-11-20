// Question 3:
// Write a function to print "Hot" or "Cold" depending on the temperatur user enters.

#include <stdio.h>

void checkTemperature(float temp){
    if(temp >= 25){
        printf("Hot! 🌞 \n");
        printf("Time for ice cream!\n");
    } else {
        printf("Cold! ❄️ \n");
        printf("Better wear a jacket");
    }
}

int main(){
    float temperature;

    printf("Enter the temperatur in Celsius: ");
    scanf("%f", &temperature);

    checkTemperature(temperature);

    return 0;
}