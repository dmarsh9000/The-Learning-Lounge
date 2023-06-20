public class TheLearningLounge {
    public static void main(String[] args) {
        
        // Declare some variables
        int num1 = 5;
        int num2 = 8;
        int result;
        
        // Perform math
        result = num1 + num2;
        System.out.println("The Sum is: "+ result);
        
        result = num2 - num1;
        System.out.println("The Difference is: " + result);
        
        result = num1 * num2;
        System.out.println("The Product is: " + result);
        
        result = num2 / num1;
        System.out.println("The Quotient is: " + result);
        
        // Perform String operations
        String str1 = "Learning";
        String str2 = "Lounge";
        
        String concatenateStrings = str1 + str2;
        System.out.println("The Concatenation is: " + concatenateStrings);
        
        String substring = str1.substring(2);
        System.out.println("The Substring is: " + substring);
        
        int lengthString = str2.length();
        System.out.println("The Length of str2 is: " + lengthString);
        
        char firstCharacter = str1.charAt(0);
        System.out.println("The first character of str1 is: " + firstCharacter);
        
        // Perform boolean operations
        boolean x = true;
        boolean y = false;
        
        boolean logicalAND = x && y;
        System.out.println("Logical AND is: " + logicalAND);
        
        boolean logicalOR = x || y;
        System.out.println("Logical OR is: " + logicalOR);
        
        boolean logicalNOTx = !x;
        System.out.println("Logical NOT for x is: " + logicalNOTx);
        
        boolean logicalNOTy = !y;
        System.out.println("Logical NOT for y is: " + logicalNOTy);
        
        // Perform Array operations
        int[] myArray = {1, 2, 3, 4, 5};
        
        int lengthArray = myArray.length;
        System.out.println("The Length of myArray is: " + lengthArray);
        
        int sum = 0;
        for (int i = 0; i < lengthArray; i++) {
            sum += myArray[i];
        }
        System.out.println("The Sum of the array is: " + sum);
        
        int max = myArray[0];
        for (int i = 1; i < lengthArray; i++) {
            if(myArray[i] > max)
                max = myArray[i];
        }
        System.out.println("The Maximum value is: " + max);
        
        int min = myArray[0];
        for (int i = 1; i < lengthArray; i++) {
            if(myArray[i] < min)
                min = myArray[i];
        }
        System.out.println("The Minimum value is: " + min);
        
        double average = (double)sum / myArray.length;
        System.out.println("The Average of the array is: " + average);
        
        // Perform Loop operations
        for (int i = 0; i < 10; i++) {
            System.out.println("Iteration " + i);
        } 
        
        int j = 0;
        while (j < 10) {
            System.out.println("Iteration " + j);
            j++;
        }
        
        int k = 0;
        do {
            System.out.println("Iteration " + k);
            k++;
        } while (k < 10);
        
        // Perform Conditional operations
        if (x) {
            System.out.println("x is True");
        } else {
            System.out.println("x is False");
        }
        
        String str3 = "University";
        if (str3.equals("University")) {
            System.out.println("str3 is University");
        } else {
            System.out.println("str3 is not University");
        }
        
        // Perform Method operations
        System.out.println("The result of the method is: " + myMethod(num1, num2));
        
        // Perform Static methods
        int staticResult = staticMethod(3, 4);
        System.out.println("The result of the static method is: " + staticResult);
        
        // Perform Static Blocks
        System.out.println("The result of the static block is: " + staticBlock(4, 6));
    }

    public static int myMethod(int x, int y) {
        return x + y;
    }
    
    public static int staticMethod(int a, int b) {
        return a * b;
    }
    
    static int staticResult;
    static {
        staticResult = staticMethod(5, 6);
    }
    
    public static int staticBlock(int c, int d) {
        return c + d;
    }

}