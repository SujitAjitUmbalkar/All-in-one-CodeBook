// A simple wrapper class to hold an integer value.
// This allows us to pass objects by reference-value,
// enabling permanent modification of the 'value' field.

class IntWrapper 
{
    public int value;

    public IntWrapper(int value) // constructor to set initial values
    {
        this.value = value;
    }
}

class program_0299A
{
    // This function swaps the values inside two IntWrapper objects.
    public static void swap(IntWrapper a, IntWrapper b) 
    {
        int temp = a.value;
        a.value = b.value;
        b.value = temp;
    }

    public static void main(String[] args) 
    {
        IntWrapper num1 = new IntWrapper(10);
        IntWrapper num2 = new IntWrapper(20);

        System.out.println("Before swap: num1=" + num1.value + ", num2=" + num2.value);
        swap(num1, num2);
        System.out.println("After swap:  num1=" + num1.value + ", num2=" + num2.value);
    }
}