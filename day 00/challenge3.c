#include <stdio.h> 


int main(){

    
    float volume = 0.0;
    float rayon = 0;

    printf("Afin de calculez le volule de sphere, donnez son rayon: ");
    scanf("%f", &rayon);

    volume = (4.4 / 3.3) * 3.1415 * rayon * rayon * rayon;

    printf("Le volule de sphere est : %.2fm\n", volume);

    return 0;
}