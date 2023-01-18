public class Student {
    String name;
    private int rollNo;

    public Student(String n, int num){
        name = n;
        rollNo = num;
    }

    public Student(String n){
        System.out.println("Hello one property");
        name = n;
    }

    public Student(){
        name = "abc";
        rollNo = 100;
    }

    public int getRollNumber(){
        return rollNo;
    }

    // public void setRollNumber(int num){
    //     if(num <=0){
    //         return;
    //     }
    //     rollNo =num;
    // }



    public void setRollNumber(int rollNo){
        if(rollNo <=0){
            return;
        }
        this.rollNo =rollNo;
    }

    public void print(){
        System.out.println("[ name = " + name + " roll no = " + rollNo + " ]");
    }

    public static void main(String[] args) {
        Student s = new Student("ram", 10);
  
        // s.rollNo = 12;
        System.out.println(s.rollNo);
        System.out.println(s.name);

        Student s1 = new Student("manihsa", 1);
        System.out.println(s1.name + " " + s1.rollNo);

        Student s2 = new Student("mahi");
        s2.print();
        
    }

}
