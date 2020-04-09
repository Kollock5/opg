package uebung_1.task_1;

public class PrettyOut {
  public static void main(String[] args) {
    ausgabe('d');
    ausgabe("hallo welt");

  }

  static void ausgabe(char c) {
    System.out.println("***\n*" + c + "*\n***");
  }

  static void ausgabe(String text) {
    String border = "**";
    for (int i = 0; i < text.length(); i++) {
      border += "*";
    }
    System.out.println(border + "\n*" + text + "*\n" + border);
  }
}