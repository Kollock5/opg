package exercise_1.task_4;

// ZF: weil java die primitiven daten typen by value und nicht by reference übergibt 

class MinMax {
  public static void main(String[] args) {
    int[] data = { 4, 8, 23, -17, 2, -6 };
    System.out.println("Minimum: " + min(data) + ", Maximum: " + max(data));
  }

  static int min(int[] x){
    int min = x[0];
    for (int i : x) if (i < min) min = i;
    return min;
  }

  static int max(int[] x){
    int max = x[0];
    for (int i : x) if (i > max) max = i;
    return max;
  }
}