public class PairUse {
    
    public static void main(String[] args) {
        // System.out.println("hello world");
        // Pair p  = new Pair(10, 20);
        // System.out.println(p.getFirst() + " " + p.getSecond());

        Pair<String> s = new Pair<String>("ram", "kimar");

        System.out.println(s.getFirst() + " " + s.getSecond());

        Pair<Integer> p = new Pair<Integer>(10,20);

        System.out.println(p.getFirst() + " " + p.getSecond());
    }
}
