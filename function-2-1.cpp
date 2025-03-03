int min_element(int array[], int n){
    int min_element=array[0];
    if(n<1){
      return 0;
    }
    for(int i=1;i<n;i++){
      if(array[i]<min_element){
          min_element=array[i];
      }
    }
      return min_element;
  }