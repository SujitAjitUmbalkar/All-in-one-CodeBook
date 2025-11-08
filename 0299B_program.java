class SwapWithArray 
{
    // This function swaps two elements within the same array.
    // It takes the array and the indices of the elements to swap.
    public static void swap(int[] arr, int i, int j) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args) {
        // We use an array to hold our values.
        int[] numbers = {10, 20};

        System.out.println("Before swap: numbers[0]=" + numbers[0] + ", numbers[1]=" + numbers[1]);
        
        // Pass the array and the indices 0 and 1 to swap them.
        swap(numbers, 0, 1);
        
        System.out.println("After swap:  numbers[0]=" + numbers[0] + ", numbers[1]=" + numbers[1]);
    }
}