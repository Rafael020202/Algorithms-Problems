#include <stdio.h>
#include <math.h>

double vx(double v0, double ang){
    double rad = 3.14159 / 180;
    return v0 * cos(rad * ang);
}

double vy (double v0, double ang){
    double rad = 3.14159 / 180;
    return v0 * sin(rad * ang);
}

double tempo(double vy, double h){
    double g = 9.80665;
    double t = ((-1 * vy) - sqrt(pow(vy, 2) + 2 * g * h)) / (-g);
    return t;
}

double dist(double vx, double t){
    return vx * t;
}

void resposta(double v0, double ang, double h, int p1, int p2){
    double velEixoX = vx(v0, ang);
    double velEixoY = vy(v0, ang);
    double t = tempo(velEixoY,h);
    double x = dist(velEixoX,t);
    
    if(x >= p1 && x<=p2)
        printf("%.5lf -> DUCK\n", x);
    else
        printf("%.5lf -> NUCK\n", x);
    
    
}

int main()
{
    double h, ang, v0, vx, vy, t, x;
    int n,i,p1,p2;

    while (scanf("%lf", &h) != EOF)
    {
        scanf("%d %d %d",&p1,&p2,&n);
        
        for(i=0; i<n; i++)
        {
            scanf("%lf %lf", &ang, &v0);
            resposta(v0,ang,h,p1,p2);
        }
    }

    return 0;
}


