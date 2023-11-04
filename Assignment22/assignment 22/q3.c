//factorial
int fact(int n){
    int i,f;
    for(i=1;f=1,i<=n;i++){
        f=f*i;
    }
}

//permutation
int permu(int n,int r){
    return fact(n)/fact(r);
}