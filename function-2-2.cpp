int max_element(int array[], int n){
    int max_element=array[1];
    if(n<1){
        return 0;
      }
      for(int i=1;i<n;i++){
        if(array[i]>max_element){
            max_element=array[i];
        }
      }
    return max_element;
}