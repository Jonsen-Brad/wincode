//果汁枚举类型
class FreshJuice{
    enum FreshJuiceSize{SMALL,MEDIUM,LARGE}
    FreshJuiceSize size;
}
public class FreshJuiceTest{
    public static void main(String[] args){
        FreshJuice Juice = new FreshJuice();
        Juice.size = FreshJuice.FreshJuiceSize.SMALL;
    }
}