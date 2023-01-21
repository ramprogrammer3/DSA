public class Constructor {

    int a;
    int b;

    public Constructor(){
        this(10,20);
        System.out.println("Constructor one");
    }

    public Constructor(int a, int b){
        this.a = a;
        this.b = b;
        System.out.println("constructor two ");
    }
    

    public static void main(String[] args) {
        // System.out.println("Hello world");
        // Constructor test = new Constructor();
    }
}
