#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

typedef struct triangulo {
    int a, b, c;
    double area;
} TRIANGULO;

typedef struct circulo {
    double raio, area;
} CIRCULO;

void Area( TRIANGULO );

int main( ) {
    TRIANGULO v;


    while(scanf("%d %d %d", &v.a , &v.b, &v.c) != EOF)
        Area(v);
    
    
    return 0;

}

void Area( TRIANGULO v)  {
    CIRCULO s, r;

    double p = (v.a + v.b + v.c)/2.0;    
    v.area = sqrt( p*(p - v.a)*(p - v.b)*(p - v.c) ); 
    
    r.raio = v.area/p;
    r.area = PI * (r.raio * r.raio);

    s.raio = (v.a * v.b * v.c)/(4 * v.area);
    s.area = (PI * (s.raio * s.raio));


    printf("%.4lf %.4lf %.4lf\n", (s.area - v.area), (v.area-r.area), r.area);

}

