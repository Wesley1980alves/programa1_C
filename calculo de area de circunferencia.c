        #include<stdio.h>
        #include<stdlib.h>

     main(){

    float perimetro,raio;
    double area, pi=3.1415927;

    printf("digite o raio da circunferencia\n");
    scanf("%f",&raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("area = %f\n",area);

    printf("perimetro='%f'",perimetro);


    return 0;
}
