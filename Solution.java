public class Solution {
    
    public static int jump(int[] nums) {
        int max=0;
        int j=0;
        for(int i=0;i<nums.length;i++){
           max=max+nums[i];
           j++;
           System.out.println(nums.length-1);
           if(max==nums.length-1){
               return j;
           }
        }
        return j;
    }

        public static void main(String[] args) {
        int[] arr={2,3,1,1,4};
        System.out.println(jump(arr));
        
    
    
    }
}
