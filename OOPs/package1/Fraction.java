public class Fraction {

    private int numerator;
    private int dunominator;

    public Fraction(int numerator, int dunominator){
        this.numerator = numerator;
        this.dunominator = dunominator;
        simplify();
    }

    public void print(){
        System.out.println(numerator + " / " + dunominator);
    }

    private void simplify(){
        int gcd = 1;
        int smaller = Math.min(numerator,dunominator);

        for(int i = 2; i<=smaller; i++){
            if(numerator % i == 0 && dunominator % i == 0){
                gcd = i;
            }
        }
        numerator = numerator / gcd;
        dunominator = dunominator / gcd;
    }

    public void increment(){
        numerator = numerator + dunominator;
        simplify();
    }

    

    public static void main(String[] args) {

        Fraction f1 = new Fraction(2, 3);
        f1.print();
        f1.increment();
        f1.print();
        
    }
}
