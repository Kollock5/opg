package exercise_1.task_3;

// ZF: weil java die primitiven daten typen by value und nicht by reference übergibt 

class SwitchArray {
  public static void main(String[] args) {
    float[] x = { 412, 4, 4124, 32 };
    float[] y = { 1, 1, 213, 1 };
    tauschen(x, y);
    System.out.println("x=" + x[0] + " y=" + y[0]);
  }

  static void tauschen(float[] x, float[] y) {
    for (int i = 0; i < x.length; i++) {
      float buffer = x[i];
      x[i] = y[i];
      y[i] = buffer;
    }

  }
}