public class PairUse {
    
    public static void main(String[] args) {

        Pair<String,Integer> Innerpair = new Pair<>("piku", 100);
        Pair<Pair<String, Integer> , String> s = new Pair<>();

        s.setSecond("ram");
        s.setFirst(Innerpair);

        System.out.println(s.getFirst());
        System.out.println(s.getSecond());
        System.out.println(s.getFirst().getFirst());
        System.out.println(s.getFirst().getSecond());


        // int i = 10;
        // Integer it = null;


        // System.out.println("hello world");
        // Pair p  = new Pair(10, 20);
        // System.out.println(p.getFirst() + " " + p.getSecond());

        // Pair<String> s = new Pair<String>("ram", "kimar");

        // System.out.println(s.getFirst() + " " + s.getSecond());

        // Pair<Integer> p = new Pair<Integer>(10,20);

        // System.out.println(p.getFirst() + " " + p.getSecond());

        // Pair<String> p = new Pair<>();
        // p.setSecond("ram");
        // System.out.println(p.getFirst() + " " + p.getSecond());

        // Pair<String, Integer> Psi = new Pair<String, Integer>("ram", 10);
        
        // System.out.println(Psi.getFirst());
        // System.out.println(Psi.getSecond());
    }
}
