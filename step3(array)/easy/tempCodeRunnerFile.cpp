int moveZero(int arr[],int n){
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[temp] = arr[i];
            temp++;
        }
        
    }
    for (int i = temp; i < n; i++)
    {
        arr[i] = 0;
    }

    return 0;
}  
    
