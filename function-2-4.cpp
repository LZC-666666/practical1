bool is_ascending(int array[], int n){
    if(n>0){
    for(int i=0;i<n-1;i++){
       if((array[i]<array[i+1])||(array[i]=array[i+1])){
          return true;
       }
    }
}
    return false;
}