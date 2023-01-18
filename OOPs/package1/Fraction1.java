
public class Fraction1 {

    private int numerator;
    private int denominator;

    public Fraction1(int numerator, int denominator) {

        if (denominator == 0) {
            denominator = 1;
        }
        this.numerator = numerator;
        this.denominator = denominator;
        simplify();
    }

    private void simplify() {
        int gcd = 1;
        int smaller = Math.min(numerator, denominator);

        for (int i = 2; i <= smaller; i++) {
            if (numerator % i == 0 && denominator % i == 0) {
                gcd = i;
            }
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }

    public void increment() {
        numerator = numerator + denominator;
        simplify();
    }

    public void setNumerator(int numerator) {
        this.numerator = numerator;
        simplify();
    }

    public int getNumerator() {
        return numerator;
    }

    public void setDenumirator(int num) {

        if (num == 0) {
            return;
        }
        this.denominator = num;
        simplify();
    }

    public int getDenumirator() {
        return denominator;
    }

    public void add(Fraction1 f2) {
        this.denominator = this.numerator * f2.denominator + this.denominator * f2.numerator;
        this.denominator = this.denominator * f2.denominator;
        simplify();
    }

    public void print() {
        System.out.println(numerator + " / " + denominator);
    }

    public static void main(String[] args) {

        Fraction1 f1 = new Fraction1(4, 6);
        f1.print();

        Fraction1 f2 = new Fraction1(4, 8);
        f2.print();
        f1.add(f2);
        f1.print();

    }
}
