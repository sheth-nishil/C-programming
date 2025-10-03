int main (){
    int arr[5];

    for (int i = 0;i<5; i++){
        printf("Enter value %d - ",i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<5; i++){
            int min_idx= i;
        for (int j = i+1; j<5;j++){
            if (arr[min_idx] > arr[j]){
                min_idx= j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
     for (int i = 0;i<5; i++){
        printf("%d, ",arr[i]);
    }


    return 0;

}
