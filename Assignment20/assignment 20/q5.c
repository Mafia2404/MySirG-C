#include<stdio.h>
#include<stdlib.h>
int lcm(int,int);
void sumd(int);
void vol(void);
void prime(int);
int main(){
    int n;
    while(1){
        printf("\n");
        printf("1.LCM of two no.\n2.Sum of digit\n3.Vol of cuboid\n4.Prime or not\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(n){
                case 1:{
                    int a,b;
                    printf("Enter two no:");
                    scanf("%d%d",&a,&b);
                    printf("LCM is %d",lcm(a,b));
                    break;
                }

                case 2:{ int a;
                printf("Enter a no:");
                scanf("%d",&a);
                sumd(a);
                    break;
                }

                case 3:{ vol();
                    break;
                }

                case 4:{int a;
                printf("Enter a no.:");
                scanf("%d",&a);
                prime(a);
                    break;
                }

                case 5:{
                    exit(0);
                }         
                
                default: 
                printf("Invalid enter again\n");
        }
    }
    return 0;
}
//function definition
int lcm(int a,int b){
    int i=1;
    while(i%a!=0 || i%b!=0){
        i++;
    }
    return i;
}

void sumd(int n){
    int t,s=0;
    while(n!=0){
        t=n%10;
        s=s+t;
        n/=10;
        
    }
    printf("%d",s);
    
}

void vol(void){
    int a,b,c,v;
    printf("Enter l b h:");
    scanf("%d%d%d",&a,&b,&c);
    v=a*b*c;
    printf("Volume is %d",v);
}

void prime(int a){
    int i;
    for(i=2;i<a-1;i++){
        if(a%i==0){
            printf("Not Prime");
            break;
        }
    
    }
    if(i==a)
    printf(" Prime");
}