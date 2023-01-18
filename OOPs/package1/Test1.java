public class Test1 {

    static int a = 10;
    int b;
    // int c = 10;

    static void fun1(){
        a = 20;
        // b = 10;
        // fun2();
        // System.out.println(this.b);
    }

    void fun2(){
        System.out.println("from m2");
    }
    
    public static void main(String[] args) {


        // System.out.println("hello world");
        // Test1 t = new Test1();
        // t.fun();
        // System.out.println(Test1.a + Test1.b);

    }
}
