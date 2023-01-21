/**
 * Vehicle
 */
public class Vehicle {

    protected int maxSpeed;
    private String color;


    public Vehicle(int maxSpeed){
        System.out.println("Vehicle constructor ");
        this.maxSpeed = maxSpeed;
    }

    public Vehicle(){
        System.out.println("vehicle Constructor ");
    }

    public String getColor(){
        return color;
    }

    public void setColor(String color){
        this.color = color;
    }

    public void print(){
        System.out.println("vehicle " + "color " + color + " maxSpeed " + maxSpeed);
    }

    public static void main(String[] args) {
        System.out.println("Hello world ");
    }
}