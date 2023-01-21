public class VehicleUse {
    public static void main(String[] args) {
        Vehicle v = new Vehicle();
        // System.out.println(v.color);
        // System.out.println(v.maxSpeed);

        v.setColor("black");    
        v.maxSpeed = 100;
        // v.print();

        Car c = new Car();
        c.setColor("red");
        c.maxSpeed = 20;
        c.numberOfDoors = 4;
        // c.print();
        c.printCar();

        // Bicycle b = new Bicycle();
        // b.print();

    }
}
