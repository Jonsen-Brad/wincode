public class Puppy{
    int puppyAge;
    public Puppy(String name){
        System.out.println("The dog's name is:"+name);
    }
    
    public void setAge(int age){
        puppyAge = age;
    }
    public int getAge(){
        System.out.println("The dog's age is:"+puppyAge);
        return puppyAge;
    }
    public static void main(String[] args){
        Puppy smalldog = new Puppy("Tommy");
        smalldog.setAge(3);
        smalldog.getAge();
        System.out.println("The age of dog is"+smalldog.puppyAge);
    }
}