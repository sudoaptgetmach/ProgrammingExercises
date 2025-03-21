package leetcode;

public class TwoSum {
    public void twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (target == nums[i] + nums[j]) {
                    System.out.printf("[%d,%d]", i, j);
                    return;
                }
            }
        }
    }

    public static void main(String[] args) {
        TwoSum ts = new TwoSum();
        ts.twoSum(new int[]{2, 7, 11, 15}, 9);
    }
}