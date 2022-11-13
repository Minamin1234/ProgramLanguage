/**
 * プログラミング言語論サンプルプログラム
 *
 * リンゴを食べる。
 * 
 * @author 北嶋 暁
 */
public class Apple {
    //
    // フィールド
    //

    private String color; // リンゴの色
    private int piece; // 切れの数

    //
    // メソッド
    //

    /**
     * 色を指定してオブジェクトを生成する。
     * 
     * @param c リンゴの色
     */
    public Apple(String c) {
        color = c;
        piece = 1;
    }

    /**
     * 何色かを返す。
     * 
     * @return 色
     */
    public String getColor() {
        return color;
    }

    /**
     * いくつに切ってあるかを返す。
     * 
     * @return 切れの数
     */
    public int getPiece() {
        return piece;
    }

    /**
     * n等分に切る。
     * 
     * @param n 分割数
     */
    public void split(int n) {
        piece *= n;
    }

    /**
     * n切れ食べる。
     * 
     * @param n 食べる切れの個数
     */
    public int eat(int n) {
        if (n > piece)
            piece = 0;
        else
            piece -= n;
        return piece;
    }

    // クラスを実行するときに呼ばれるメソッド
    public static void main(String[] args) {
        Apple myapple = new Apple("red"); // 新しいオブジェクトを生成する。

        int n = 3;
        myapple.split(n);
        System.out.println("りんごを" + n + "等分しました。");

        while (myapple.getPiece() > 0) {
            myapple.eat(1);
            System.out.println("りんごを一切れ食べました。");
        }

        System.out.println("おしまい。");
    }
}
