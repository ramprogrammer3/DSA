public class B extends A {

    int j;

    void display(){
        System.out.println(j);
    }
    
    public static void main(String[] args) {
        // System.out.println("Hello world ");
        
        B obj = new B();
        obj.j = 2;
        obj.display();
    }
}
