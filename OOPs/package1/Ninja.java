public class Ninja {

    public Ninja(String name){
        System.out.println("constructor one " + name);
    }
    public Ninja(String name, int age){
        System.out.println("constructor two " + name + " " + age);
    }

    public Ninja(long id){
        System.out.println("constructor three " + id);
    }
    
    public static void main(String[] args) {
        System.out.println("Hello world");

        Ninja geek3 = new Ninja("ram");
        Ninja geek2 = new Ninja("ram", 10);
    }
}
