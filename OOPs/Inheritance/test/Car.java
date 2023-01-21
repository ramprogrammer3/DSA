public class Car extends Vehicle {

    public static void main(String[] args) {
        System.out.println("hello world");
        Vehicle v = new Vehicle();
        v.color = "white";
        v.set(1010);
        System.out.println(v.color + " " + v.get());
    }
}
