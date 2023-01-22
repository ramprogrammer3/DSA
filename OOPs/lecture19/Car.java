public class Car extends Vehicle {
    
    int numDoors;
    int numGears;

    public Car(){
        System.out.println("Car Constructor ");
        numDoors = 4;
        numGears = 5;
    }

    public Car(int numDoors, int maxSpeed){
        super(maxSpeed);
        System.out.println("car constructor ");
        this.numDoors = numDoors;
    }

    public void print(){
        super.print();
        System.out.println("Car numDoors " + numDoors + " numGears " + numGears);
    }

    public void printMaxSpeed(){
        super.maxSpeed = 150;
        System.out.println("maxSpeed " + " " + super.maxSpeed);
    }

    
    public static void main(String[] args) {
        System.out.println("Hello Car ");
    }
}
