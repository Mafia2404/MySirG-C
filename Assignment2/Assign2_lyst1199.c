#include<stdio.h>
//Q5
int main()
{
    int cp,sp;
    float profit;
    printf("Enter cp and sp of 12 bananas:");
    scanf("%d%d",&cp,&sp);
    profit=(sp-cp)/12.0*25;
    printf("Profit or loss earned = %f",profit);
    printf("\n");
    return 0;

}
//Q4
/*
int main()
{
    int l,b,h,V;
    printf("Enter length, breadth and height: ");
    scanf("%d%d%d",&l,&b,&h);
    V=l*b*h;
    printf("Volume of Cuboid is %d",V);
    printf("\n");
    return 0;
}*/
//Q3
/*
int main()
{
    int p,t;
    float r,si;
    printf("Enter p,r and t");
    scanf("%d %f %d",&p,&r,&t);
    si=p*r*t/100;
    printf("Simple Interest is %f",si);
    printf("\n");
    return 0;
}
*/
//Q2
/*
int main()
{
    int r;
    
    printf("Enter radius of a circle");
    scanf("%d",&r);
    
    printf("Circumference is %f",2*3.14*r);
    printf("\n");
    return 0;
}*/
//Q1
/*
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average is %f",avg);
    printf("\n");
    return 0;

}*/