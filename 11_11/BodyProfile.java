public class BodyProfile
{
    private String name;
    private double height;
    private double weight;

    public BodyProfile(String name,double height,double weight){
        this.name = name;
        this.height = height;
        this.weight = weight;
    }

    public void ShowProfile(){
        System.out.println("Name: " + this.name);
        System.out.println("Height: " + this.height);
        System.out.println("Weight: " + this.weight);
    }

    public void UpdateWeight(double w){
        this.weight = w;
    }

    public double BMI(){
        return this.weight / this.height * this.height;
    }

    public static void main(String[] args){
        BodyProfile my = new BodyProfile("minamin", 180, 70);
        my.ShowProfile();
        my.UpdateWeight(68);
        System.out.println(my.BMI());
    }
}