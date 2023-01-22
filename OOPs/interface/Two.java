public class Two extends One implements A {
    
    public void method(){
        System.out.println("Class Two method ");
    }

    public static void main(String[] args) {
        
        A a = new Two();
        a.method();
    }
}
