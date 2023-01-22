/**
 * Vehicle
 */
public abstract class Vehicle {

    private String color;
    int maxSpeed;

     public Vehicle() {
        System.out.println("Vehicle Constructor ");
        maxSpeed = 60;
    }

    public Vehicle(int maxSpeed){
        System.out.println("Vehicle Constructor ");
        this.maxSpeed = maxSpeed;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void print() {
        System.out.println("Vehicle color " + color + " MaxSpeed " + maxSpeed);
    }

    public abstract boolean isMotorized();

    public static void main(String[] args) {
        System.out.println("Hello world ");
    }
}