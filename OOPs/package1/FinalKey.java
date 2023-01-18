public class FinalKey {

    public String name;
    private int rollNo;
    double cgpa;
    final double conversionFactor = 0.95;
    static int numStudents;

    public FinalKey(String name, int rollNo){
        this.name = name;
        this.rollNo = rollNo;
        // conversionFactor = .99;
        numStudents++;
    }

    public FinalKey(String n){
        name = n;
    }

    public FinalKey(){
        name = "abc";
        rollNo = 10;
    }

    public void print(){
        System.out.println(name + " " + rollNo);
    }

    public int getRollNumber(){
        return this.rollNo;
    }

    public void setRollNumber(int rollNo){
        if(rollNo <= 0){
            return;
        }

        this.rollNo = rollNo;
    }


    public static void main(String[] args) {
        
        // FinalKey s = new FinalKey("manihsa",10);

        // s.conversionFactor = .353;

        // System.out.println(s.conversionFactor);

        // FinalKey s1 = new FinalKey("ram",1);

        // System.out.println(s.numStudents);
        // System.out.println(s1.numStudents);
        System.out.println(FinalKey.numStudents);

    }
}
