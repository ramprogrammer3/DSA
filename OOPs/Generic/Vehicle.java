public class Vehicle {

    int maxSpeed;
    String company;

    public Vehicle(int maxSpeed, String company) {
        this.maxSpeed = maxSpeed;
        this.company = company;
    }

    public void print() {
        System.out.println(maxSpeed + " " + company);
    }

    public static void main(String[] args) {

    }
}
