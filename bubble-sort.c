/* Function to sort an array in ascending order using
   bubble sort
void bubbleSort(int arr[], int n)
{
   int i;
   for (i = 0; i < n-1; i++)      
        bubble(arr, i, n);
} */

void bubble(int arr[], int i, int n)
{
    int swapped,temp;
    do {
        swapped = 0;
        for(i = 0; i < n - 1; i++) {
            if(arr[i] > arr[i+1]) {
              temp = arr[i]^arr[i+1];
              arr[i] = temp^arr[i];
              arr[i+1] = temp^arr[i+1];
              swapped = 1;
            }
        }
    }while(swapped);
}