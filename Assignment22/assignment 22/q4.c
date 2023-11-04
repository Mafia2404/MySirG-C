int contain(int n,int d){
    while(n){
        if(n%10==d)
        return 1;
      n/=10;  
    }
    return 0;
}