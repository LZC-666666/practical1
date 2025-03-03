double array_mean(int array[], int n){
    if(n<1){
        return 0.0;
    }
    int sum=0;
    double average_number;
    for(int i=0;i<n;i++){
      sum+=array[i];
    }
    average_number=(double)sum/n;
    return average_number;
}