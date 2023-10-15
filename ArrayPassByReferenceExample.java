public class ArrayPassByReferenceExample {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};

        // Pass the array to the modifyArray method
        modifyArray(arr);

        // Print the modified array
        for (int element : arr) {
            System.out.println(element);
        }
    }

    public static void modifyArray(int[] array) {
        // Modify the array elements
        for (int i = 0; i < array.length; i++) {
            array[i] = array[i] * 2;
        }
    }
}
