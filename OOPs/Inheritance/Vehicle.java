public class Vehicle {

    private String color;
    int maxSpeed;

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void print() {
        System.out.println("Color : " + color);
        System.out.println("MaxSpeed: " + maxSpeed);
    }

    public static void main(String[] args) {
        System.out.println("hello world ");
    }
}
