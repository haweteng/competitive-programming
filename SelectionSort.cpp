int select(int arr[], int i)
{
    // code here such that selecionSort() sorts arr[]
}


void selectionSort(int arr[], int n)
{
 for(int i=0;i<n;i++){
     int minIndex=i;
     for(int j=i+1;j<n;j++){
         if(arr[j]<arr[i]){
             minIndex=j;
             if(minIndex!=i){
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
 }  
  //code here
}
