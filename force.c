#include<stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter mass in kgs:\n");
    scanf("%f",&mass);
    printf("The value of force in newton %f\n",force(mass));
    return 0;
}
float force(float mass){
    float f= mass*9.8;
    return f;
}