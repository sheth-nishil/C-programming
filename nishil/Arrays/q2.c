int main (){
    int arr[10];

    for (int i = 0;i<10; i++){
        printf("Enter value %d - ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("%d, %d, %d", arr[3], arr[6], arr[8]);

    return 0;

}
