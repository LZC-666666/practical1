int count_evens(int number){
    int count=0;
    if(number<1){
        return 0;
    }
    for(int i=1;i++;i<=number){
        if((i%2)==0){
            count++;
        }
    }
    return count;
}