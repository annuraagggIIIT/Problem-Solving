//program to find a substring in a string. #50
public class Substring_String{
    public static void main(String[] args) {
        String mainString = "Hello, World!";
        String subString = "World";
        
        int index = mainString.indexOf(subString);
        
        if (index != -1) {
            System.out.println("Substring found at index: " + index);
        } else {
            System.out.println("Substring not found in the main string.");
        }
    }
}
