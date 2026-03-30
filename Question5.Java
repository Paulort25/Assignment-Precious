public class PolymorphismDemo {

    // --- 1. OVERLOADED SUBPROGRAMS (Ad-hoc Polymorphism) ---
    // We have to explicitly define a method for each type combination
    public static void printItem(int item) {
        System.out.println("Overloaded (int): " + item);
    }

    public static void printItem(String item) {
        System.out.println("Overloaded (String): " + item);
    }

    // --- 2. GENERIC SUBPROGRAM (Parametric Polymorphism) ---
    // A single method that adapts to different reference types
    public static <T> void printGenericItem(T item) {
        System.out.println("Generic (" + item.getClass().getSimpleName() + "): " + item);
    }

    public static void main(String[] args) {
        // Testing Overloaded methods
        printItem(100);       // Calls the int version
        printItem("Hello");   // Calls the String version
        
        System.out.println("-------------------");

        // Testing Generic method
        printGenericItem(200);       // T becomes Integer
        printGenericItem("World");   // T becomes String
        printGenericItem(45.5);      // T becomes Double
    }
}
