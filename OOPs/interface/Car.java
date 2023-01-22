public class Car extends Vehicle implements VehicleInterface, CarInterface {

    public String getCompany(){
        return null;
    }

    public boolean isMotorized(){
        return true;
    }

    public int getGears(){
        return 5;
    }
    

    public static void main(String[] args) {
        System.out.println("hello world");
    }
}
