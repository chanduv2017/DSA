package Greedy;

import java.util.*;

class Activity {
  int start;
  int finish;

  Activity(int s, int f) {
    start = s;
    finish = f;
  }
}

class ActivitySelection {
  public static void main(String[] args) {
    Activity arr[] = { new Activity(12, 25), new Activity(10, 20), new Activity(20, 30) };
    System.out.println(maxActivity(arr));
  }

  static int maxActivity(Activity[] arr) {
    Arrays.sort(arr, new MyCmp());
    int res = 1;
    int prev = 0;
    for (int curr = 1; curr < arr.length; curr++) {

      if (arr[curr].start >= arr[prev].finish) {
        res++;

        prev = curr;
      }
    }

    return res;
  }
}

class MyCmp implements Comparator<Activity> {
  public int compare(Activity a1, Activity a2) {
    return a1.finish - a2.finish;
  }
}
