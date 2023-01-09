package package1;

public class human {
    String name; 
    int age;
    human(String name, int age){
        this.name = name;
        this.age = age;
    }
    void print(){ 
        System.out.println("this is your name : " + this.name);
        System.out.println("this is your age : " + this.age);
    }

}
