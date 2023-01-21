public class Car extends Vehicle {
    // int maxSpeed = 180;
    int numDoors;


    public Car(int numDoors, int maxSpeed){
        // super(maxSpeed);
        System.out.println("Car constructor ");
        this.numDoors = numDoors;
    }

    public void print(){
        super.print();
        System.out.println("car " + "numDoors " + numDoors);
    }

    public void printMaxspeed(){
        super.maxSpeed = 150;
        System.out.println(maxSpeed + " " + super.maxSpeed);
    }
    
    public static void main(String[] args) {

        System.out.println("Hello ram");
        
    }
}
