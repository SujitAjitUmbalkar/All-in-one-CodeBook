// you cannot pass the address of a primitive variable (like int, char, double) directly to a function in Java.
// Java does not have pointers in the same way C++ does. 
// You cannot use the & operator to get the memory address of a variable, and you cannot use * to dereference it.

// An array is the simplest built-in object that can hold primitives. By passing the array,
//  you are passing a copy of the reference to that array. 
// The function can then follow that reference to the actual array in memory and modify its contents permanently.

class Program_0296A
{
    public static void swap(int[] arr, int i, int j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String[] args)
    {
        // Wrap the integers in an array to pass them by reference-value.
        int[] numbers = {10, 11};

        System.out.println("Value of a before swap : " + numbers[0]);
        System.out.println("Value of b before swap : " + numbers[1]);

        // Pass the array and indices 0 and 1 to swap.
        swap(numbers, 0, 1);

        System.out.println("Value of a after swap : " + numbers[0]);
        System.out.println("Value of b after swap : " + numbers[1]);
    }
}

// pass 0 and 1 index numbers (we are going to swap 0 and 1 )