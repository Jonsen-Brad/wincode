//helloworld;
class FreshJuice{
    enum FreshJuiceSize{SMALL,MEDIUM,LARGE}
    FreshJuiceSize size;
}
public class helloworld{
    public static void main(String []args)
    {
        FreshJuice juice = new FreshJuice();
        juice.size = FreshJuice.FreshJuiceSize.MEDIUM;
        System.out.println("nihao");
    }
}
