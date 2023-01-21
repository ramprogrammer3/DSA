public class Student extends Person {

    void fun(){
        System.out.println("student class ");
    }

    void display(){
        fun();
        super.fun();
    }
    
    public static void main(String[] args) {
        System.out.println("student class ");
    }
}
