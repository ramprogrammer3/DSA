public class StudentUse {
    public static void main(String[] args) {

        Student s = new Student();
        s.name = "Manisha";
        // s.rollNo = 10;

        s.setRollNumber(100);
        System.out.println(s.getRollNumber());
        System.out.println(s.name);
        System.out.println(s.getRollNumber());

        Student s1;
        s1 = new Student();

        s1.name = "ram";
        System.out.println(s1.name);
    }
}
