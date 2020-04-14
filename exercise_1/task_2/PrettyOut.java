package exercise_1.task_2;

public class PrettyOut {
  public static void main(String[] args) {
    ausgabe('d');
    ausgabe("hallo welt");
    ausgabe("hallo welt", '+');
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

  static void ausgabe(String text, char randZeichen) {
    String border = "" + randZeichen + randZeichen;
    for (int i = 0; i < text.length(); i++) {
      border += randZeichen;
    }
    System.out.println(border + "\n" + randZeichen + text + randZeichen + "\n" + border);
  }
}